#include <iostream>
using namespace std;
int main()
{
	int number;
	for (int x = 1; x <= 10; x++)
	{
		cout << "Enter the " << x << " Number =";
		cin >> number;
			if ((number % 5 == 0) && (number % 2 != 0))
				cout << "\n\t🌼💌" << number << " is odd and divisible by 5🚩😫\n" << endl;
	}
	return 0;
}