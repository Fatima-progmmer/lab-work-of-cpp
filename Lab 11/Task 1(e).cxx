#include <iostream>
using namespace std;
void Displayaboveaverage(int array[])
{
	int i;
	long sum = 0;
	for (i = 1; i <= 30; sum += array[i++])
		;
	sum = sum / 2;
	cout << "Average of all number is " << sum << endl;
	cout << "Greater value of average  is ";
	for (i = 1; i <= 30; i++)
	{
		if (sum < array[i])
			cout << array[i] << "  ";
	}
}
int main()
{
	int array[30];
	cout << "Enter number " << endl;
	for (int i = 1; i <= 30; i++)
		cin >> array[i];
	Displayaboveaverage(array);
	return 0;
}