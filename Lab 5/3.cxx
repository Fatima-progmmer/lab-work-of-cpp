#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout <<"Enter first number=";
	cin >> a;
	cout <<"Enter second number=";
	cin >> b;
	cout <<"Enter third number=";
	cin  >> c;
	if((c>b)&&(c>a)&&(a<b))
	{
	cout <<"The maximum number is " << c <<endl;
	cout <<"The  minimum number is " << a;
	}
	else if((a>b)&&(a>c)&&(b<a))
	{
		cout <<"The maximum number is " << a << endl;
		cout <<"The minimum number is " << b;
		}
		else
		{
			cout <<  "The maximum number is" << b <<endl;
			cout << "The minimum number is " << c;
		}
				return 0;
}
