#include <iostream>
using namespace std;
int main()
{
	int values[10];
	int *valuesPtr = values;
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter value " << i + 1 << ": ";
		cin >> *(valuesPtr + i);
	}
	for (int i = 0; i < 10; i++)
	{
		if (*(valuesPtr + i) % 2 != 0)
		{
			if (*(valuesPtr + i) > 0)
				*(valuesPtr + i) += 1;
			else
				*(valuesPtr + i) -= 1;
		}
	}
	cout << "Updated array: ";
	for (int i = 0; i < 10; i++)
	{
		cout << *(valuesPtr+i) << " ";
	}
	cout << endl;
	return 0;
}