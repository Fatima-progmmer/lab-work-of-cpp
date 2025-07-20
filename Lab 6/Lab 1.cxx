#include<iostream>
using namespace std;
int main()
{
	int x,y,a,b,c,z=0;
	for (x=1;x<=10;x++)
	{
		cout << "Enter a number " << x <<"="; 
		cin >> y;
		if((y%2==0)&&(y%7==0))
		a++;
		if((y%2!=0)&&(y%7==0))
		z++;
	}
		cout << z << " odd numbers that is divisible by 7" << endl;
		cout << a << " even numbers that is divisible by 7" << endl;
	return 0;
}