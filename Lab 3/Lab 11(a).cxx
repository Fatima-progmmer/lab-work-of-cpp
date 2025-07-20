#include<iostream>
using namespace std;
int main()
{
	float a,b,c,d;
	int num;
	cout << "Enter value of a=";
	cin >> a;
	cout << "Enter value of b=";
	cin >> b;
	cout << "Enter value of c=";
	cin >> c;
	cout << "Enter the value of d=";
	cin >> d;
	cout << "Enter a num2 value=";
	cin >> num;
	cout << "The solution is=" << a+(b-c/d) + ++num;
	return 0;
}