#include <iostream>
using namespace std;
int findthirdsmallest(int array[])
{
	int first = 0, second, third;
	for (int i = 1; i <= 30;i++)
	{
		if (array[i]>first)
		{
			third = second;
			second = first;
			first = array[i];
		}
		else if (array[i]<second)
		{
			third = second;
			second = array[i];
		}
		else if (array[i]<third)
			third = array[i];
	}
	return third;
}
int main()
{
 int array[30];
cout << "Enter values" << endl;
for (int i = 1; i <= 30; i++)
	cin >> array[i];
cout << "Third smallest value is = " << findthirdsmallest(array);
return 0;
}