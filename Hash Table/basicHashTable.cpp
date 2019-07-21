#include "basicHashTable.h"

basicHashTable::basicHashTable(string x)
{
	for (size_t i = 0; i < x.length(); i++)
	{
		int index = hashFunc(x[i]);
		Frequency[index]++;
	}

	for (size_t i = 0; i < 26; i++)
	{
		cout << (char)(i + 'a') << ' ' << Frequency[i] << endl;
	}
}

int basicHashTable::hashFunc(char y)
{
	return (y - 'a');
}
