#include <iostream>
using namespace std;
int main()
{
	int value;
	cout << "Enter a value=";
	cin >> value;
	{
		value -= 2;
		if (value % 2 == 0)
			cout << " is not a prime number";
		else
			cout << " is a prime number";
	}
	return 0;
}