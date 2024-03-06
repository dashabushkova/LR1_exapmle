#include "lr1.h"
#include <string>
#include <iostream>

struct Error {
	int code;
	string name;

	Error(int c, string n)
	{
		code = c;
		name = n;
	}
};

vector<Error> arrayErrors;

void printErrors()
{
	for (int i = 0; i < arrayErrors.size(); i++)
		cout << arrayErrors[i].code << " " << arrayErrors[i].name << endl;
}

pair<int, float> firstElement(vector<float>& array) {
	
	int count = array.size();
	int index = -1;

	if (count > 1024) arrayErrors.push_back(Error(1, "The number of elements is greater than possible"));

	bool fl = 0;

	for (int i = 0; i < count; i++)
	{
		if (fl == 0 && array[i] > 100)
		{
			array[i] /= 100;
			index = i;
			fl = 1;
		}
		else if (fl) array[i] /= 100;
	}

	if(!fl) arrayErrors.push_back(Error(2, "The element 100 does not exist"));

    return make_pair(index, array[index]);
}