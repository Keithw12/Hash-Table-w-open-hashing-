#include "basicHashTable.h"
#include "openHashing.h"

using namespace std;

int main()
{
	string sDataSet = "mystringstuff";
	basicHashTable oMyHashTable(sDataSet);
	cout << endl;
	string sArrayDataSet[] = { "abcdef","defabc","adefbc" };
	openHashing oOpenHashTable;

	for (size_t i = 0; i < (sizeof(sArrayDataSet)/sizeof(*sArrayDataSet)); i++)
	{
		oOpenHashTable.insert(sArrayDataSet[i]);
		oOpenHashTable.search(sArrayDataSet[i]);
	}
	return 0;
}