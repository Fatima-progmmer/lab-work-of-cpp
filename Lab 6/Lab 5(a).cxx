#include<iostream>
using namespace std;
int main()
{
	char want;
	do
	{
	int x,y,a,b,c,z=0;
	for (x=1;x<=10;x++)
	{
		cout << "Enter a number " << x <<"="; 
		cin >> y;
		if((y%2=!=0)&&(y%7==0))
		a++;
		if((y%2!=0)&&(y%7==0))
		z++;
	}
	{
		cout << "\n\t" << z << " odd numbers that is divisible by 7" << endl;
		cout <<"\n\t" << a << " even numbers that is divisible by 7" << endl;
	}
	cout <<"\n\t" <<"\nDo you want to continuous?\n";
	cin >> want;
	}
	while (want!='n');
	return 0;
}