#include <iostream>
using namespace std;
void divide_it(float num1, float num2)
{
	if (num1!= 0)
	{
		cout << "The " << num2 << "  divided by the  " << num1 << "  and their result is  " << num1/num2 << endl;
		return;
	}
	else
		cout << "The  " << num2 << "  cannot be divided by the " << num1 << endl;
}
int main()
{
	int x,y; 
	cout <<"Enter first number=";
	cin >> x;
	cout << "Enter second number=";
	cin >> y;
	divide_it(x,y);
	return 0;
}