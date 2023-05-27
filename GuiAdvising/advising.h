#pragma once
#include <string.h>
#include<string>
using namespace std;
 class advising
{
public:
	void Writefiletoarray(string x);
	int search(string array[][7], int row, int j, int i);
	void Group2(string arr1[][7], int row, bool run, string arr2[][7]);
	void Group1(string arr1[][7], int row, bool run);
	void WriteArrayToFile(string arr[][1]);
	string Name;
	void writescheduletofile(int x);
	advising();
	advising(string name, int id);

};

