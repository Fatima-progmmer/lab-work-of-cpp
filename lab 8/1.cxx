#include <iostream>
using namespace std;
int main()
{
	int y = 1;
	int array[10];
	cout << "Enter numbers " << endl;
	for (int x = 1; x <= 10; x++)
		cin >> array[x];
	{
		for (int x = 1; x <= 10; x++)
			if (y < array[x])
				y = array[x++];
	}
	cout << "The greater number is " << y;
	return 0;
}