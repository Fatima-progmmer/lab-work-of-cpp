#include <iostream>
using namespace std;
void Findgreater(int array[], int Num)
{
	for (int i = 0; i <= 30; i++)
	{
		if (Num <= array[i])
			cout << array[i] << " ";
	}
}
int main()
{
	int Num;
	int array[30];
	cout << " \tEnter the numbers " << endl;
	for (int i = 0; i <= 30; i++)
		cin >> array[i];
	cout << "Which number are you want to greater than ?" << endl;
	cin >> Num;
	cout << "The greatest number above " << Num << " is ";
	Findgreater(array, Num);
	return 0;
}