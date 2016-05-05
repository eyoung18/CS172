/////////
//Elizabeth Young
//CS172
//extra credit assignment
///////////////

#include <iostream>
#include "WORD.h"
#include <string>
#include <vector>
#include <fstream>
using namespace std;

void addToVector(vector<Word> &v, Word wrd); //Adds a word to the vector when alreadyInVector returns false
int alreadyInVector(vector<Word> &V, string type); //Checks that a word-type isn't already in the vector
int mostFrequent(vector<Word> &v); //Returns the highest frequency of a word-type occurrance (didn't implement)
Word usingFrequency(vector<Word> &v, int frequency); //Returns a word-type corresponding to a frequency (didn't implement)
void sortByFrequency(vector<Word> &v); //Sorts the vector of words by their frequency (highest to lowest frequency)
template< typename T>
void Swap(T& v1, T& v2); //Swaps word-locations in vector as called by the sort function

void addToVector(vector<Word> &v, Word wrd)
{
	int checker = alreadyInVector(v, wrd.getType());
	if (checker == -1)
		v.push_back(wrd);
	else
		v[checker].setFrequency(v[checker].getFrequency() + 1);
}

int alreadyInVector(vector<Word> &V, string type)
{
	for (int i = 0; i < V.size(); i++)
	{
		if (type == V[i].getType())
			return i;
	}
	return -1;
}

int mostFrequent(vector<Word> &v)
{
	int maxFrequency = v[0].getFrequency();
	for (int i = 0; i < v.size()-1; i++)
	{
		if (v[i + 1].getFrequency() > v[i].getFrequency())
			maxFrequency = v[i + 1].getFrequency();
	}

	return maxFrequency;
}



Word usingFrequency(vector<Word> &v, int frequency)
{
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].getFrequency() == frequency)
			return v[i];
	}

	Word defaultWrd;
	return defaultWrd;
}

void sortByFrequency(vector<Word> &v)
{
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v.size(); j++)
		{
			if (v[i].getFrequency() > v[j].getFrequency())
				Swap(v[i], v[j]);
		}
	}
}

template< typename T>
void Swap(T& v1, T& v2)
{
	T temp = v1;
	v1 = v2;
	v2 = temp;
}

int main()
{
	vector<Word> theVector;
	
	fstream file("music.txt", ios::in | ios::out);
	
	if (file.fail())
	{
		cout << "can't open file" << endl;
		return 0;
	}

	string word;
	int count = 0;
	while (file >> word)
	{
		Word wrd(word);
		addToVector(theVector, wrd);
		count++;
		cout << count << endl;
	}

	cout << "Now calculating the statistics on the words . . . . . " << endl << endl;

	sortByFrequency(theVector);
	cout << "the size of this vector is " << theVector.size() << endl;
	cout << "the top ten most frequented words are " << endl;
	for (int i = 0; i < 10; i++)
		cout << theVector[i].getType() << endl;
	int medianLocation = theVector.size() / 2;
	int medianFrequency = theVector[medianLocation].getFrequency();
	cout << "The median word(s) (of frequency " << medianFrequency << ") are:" << endl;
	for (int i = 0; i < theVector.size(); i++)
	{
		if (theVector[i].getFrequency() == medianFrequency)
			cout << theVector[i].getType() << endl;
	}

	//This next section regarding words that only appear once has been commented out because 
	//it turned out that my median frequency was 1, so all the words that only appeared once
	//are already being cout-ed.  Running the same list of words again, as it was an immense list, only slowed the code
	//and made it difficult to scroll through and find the above components.

	/*cout << "The words that only appeared once are:" << endl;
	for (int i = 0; i < theVector.size(); i++)
	{
		if (theVector[i].getFrequency() == 1)
			cout << theVector[i].getType() << endl;
	}*/

	file.close();
}