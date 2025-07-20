#include<iostream>
using namespace std;
void swapbyvalu(int a,int b)
{
	int temp=a;
	a=b;
	b=temp;
}
void swapbyref(int& a,int& b)
{
	int temp=a;
	a=b;
	b=temp;
}
int main()
{
	int num1=10,num2=20;
	swapbyvalu(num1,num2);
	cout <<"pass by value" <<endl;
	cout << num1 <<"	" << num2 <<endl; 
	swapbyref (num1,num2);
	cout << "pass by reference" << endl;
	cout << num1 << "	" << num2;
	return 0;
}