#pragma once
#include <iostream>
#include <string>

using namespace std;

class basicHashTable
{
public:
	basicHashTable(string x);
	int hashFunc(char y);
private:
	int Frequency[26] = { 0 };
};