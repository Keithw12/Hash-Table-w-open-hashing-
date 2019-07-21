#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class openHashing
{
public:
	void insert(string s);
	int hashFunc(string y);
	void search(string s);
private:
	vector <string> hashTable[20];
	int hashTableSize = 20;
};