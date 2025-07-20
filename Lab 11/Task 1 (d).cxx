#include <iostream>
using namespace std;
void reverse(int array[])
{
	for (int i = 5; i >= 1; i--)
		cout << array[i] << " \t\t";
}
int main()
{
	int array[30];
	cout << "\t Enter values" << endl;
	for (int i = 1; i <= 5; i++)
		cin >> array[i];
	cout << "\tAfter reversing" << endl;
	reverse(array);
	return 0;
}