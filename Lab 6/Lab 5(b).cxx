#include<iostream>
using namespace std;
int main()
{
	char want;
	do
	{
int fact=1,number;
cout<<"Enter any Number: ";
cin>>number;
for(int i=1;i<=number;i++)
{
fact=fact*i;
}
cout<<"Factorial of " << fact;
	cout <<"\n\t" <<"\nDo you want to continuous?\n";
	cin >> want;
	}
	while (want!='n');
	return 0;
}