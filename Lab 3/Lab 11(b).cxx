#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3,num;
	float result;
	cout <<"Enter the value of num=";
	cin >> num;
	cout << "Enter value of num1=";
	cin >> num1;
	cout << "Enter value of num2=";
	cin >> num2;
	cout << "Enter value of num3=";
	cin >> num3;
	result = num1+num2/num3+num+num2++;
	cout << "The result is=" << result;
	return 0;
}