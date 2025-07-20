#include <iostream>
using namespace std;
int main()
{
	int a[5][5];
	int i,j;
	int smallest=0;
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
		for(i=1;i<=5;i++)
		{
			for(j=1;j<=5;j++)
			{
						if (a[i][j] >= 100)
						{
				cout << a[i][j] << " Value are not accepted you should have to enter again value = ";
			    cin >> a[i][j];
						}
		}
	}
	cout << "Now updated value are " << endl;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			cout << " " << a[i][j];
			if (j == 5)
				cout << endl;
		}
	}
 	return 0;
}