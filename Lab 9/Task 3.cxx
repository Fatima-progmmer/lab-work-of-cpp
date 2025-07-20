#include <iostream>
using namespace std;
int main()
{
	int a[5][5];
	int x=0;
	int i,j;
	cout << "Enter elements of matrix: " << endl;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
			cin >> a[i][j];
	}
	cout << "\nEntered Matrix: " << endl;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			cout << " " << a[i][j];
			if (j == 5)
				cout << endl;
		}
	}
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			if (a[i][j] % 2 == 0)
			{
				x++;
				cout << "In " << i << " row and " << j << "  column " << a[i][j]<< " is even number" << endl;
			}
		}
	}
	cout << x << " is in the Entered matrix";
	return 0;
}