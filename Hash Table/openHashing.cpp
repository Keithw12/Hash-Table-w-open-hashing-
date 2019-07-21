#include "openHashing.h"

void openHashing::insert(string s)
{
	//Compute the index using Hash Function
	int index = hashFunc(s);
	//Inserts element into the linked list at the particular index
	hashTable[index].push_back(s);
}

int openHashing::hashFunc(string y)
{
	//A 'good' hashing algorithm that uses placement to reduce collisions
	int index = 0;
	for (size_t i = 0; i < y.length(); i++)
	{
		index += y[i] * (i + 1);
	}

	index %= hashTableSize;

	return index;
}

void openHashing::search(string s)
{
	//Compute the index by using the hash function
	int index = hashFunc(s);
	//Search the linked list at that specific index
	for (size_t i = 0; i < hashTable[index].size(); i++)
	{
		if (hashTable[index][i] == s)
		{
			cout << s << " is found at index " << index << endl;
			return;
		}
	}
	cout << s << " is not found!" << endl;
}
