#include <iostream>
using namespace std;
int main()
{
	int aa[5];
	cout << "Enter arrays values \n";
	for (int x = 1; x <= 5; x++)
		cin >> aa[x];
	cout << "Enter 1 to sort in ascending order \nEnter 2 to sort in descending order" << endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
		for (int x = 1; x <= 5; x++)
		{
			for (int j = 1 + x; j <= 5; j++)
			{
				if (aa[x] > aa[j])
				{
					int temp;
					temp = aa[x];
					aa[x] = aa[j];
					aa[j] = temp;
				}
			}
		}
		break;
	case 2:
		for (int x = 1; x <= 5; x++)
		{
			for (int j = 1 + x; j <= 5; j++)
			{
				if (aa[x] < aa[j])
				{
					int temp;
					temp = aa[x];
					aa[x] = aa[j];
					aa[j] = temp;
				}
			}
		}
		break;
	}
		for (int x = 1; x <= 5; x++)
			cout << aa[x] << "	";
		return 0;
	}