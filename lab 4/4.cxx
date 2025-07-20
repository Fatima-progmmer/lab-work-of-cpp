#include<iostream>
using namespace std;
int main()
{
	int select,x,y,z;
	cout << "Press 1 to find the sum of numbers\nPress 2 to find that number is even or odd\n";
	cin >> select;
	switch(select)
	{
	case 1:
	{
	cout << "Enter first Number=";
	cin >> x;
	cout <<"Enter second number=";
	cin >> y;
	cout << "Sum of number is=" << x+y;
	break;
	}
	case 2:
	{
	cout <<"Enter a number=";
	cin>> z;
		if(z%2==0)
		cout << "Number is even";
		else
		cout << "Number is odd";
		break;
	}
	}
		return 0;
}