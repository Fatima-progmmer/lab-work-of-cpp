#include <iostream>
using namespace std;
void Readarray(int array[])
{
	for (int i = 1; i <= 30; i++)
		cout << " \t" << array[i];
}
int findsum(const int arry[])
{
	long sum = 0;
	for (int i = 0; i < 30; i++)
	{
		if (arry[i] % 2 == 0)
			sum = sum + arry[i];
	}
	return sum;
}
int main()
{
	int array[30];
	cout << "Enter the array" << endl;
	for (int i = 1; i <= 30; i++)
		cin >> array[i];
	cout << "The sum of even values of array is " << findsum(array) << endl;
	cout << "The values is ";
	Readarray(array);
	return 0;
}