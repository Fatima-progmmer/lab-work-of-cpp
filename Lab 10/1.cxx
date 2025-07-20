#include <iostream>
using namespace std;
int long reverse(int long number)
{
	int long rever = 0;
	while (number != 0)
	{
		rever = rever * 10;
		rever = rever + number % 10;
		number = number / 10;
	}
	return rever;
}
int main()
{
	int long num;
	cout << "Enter a  10  number=";
	cin >> num;
	cout << "After swapping the number :" << reverse(num);
	return 0;
}