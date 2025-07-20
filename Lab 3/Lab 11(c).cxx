#include<iostream>
using namespace std;
int main()
{
	int m,n,p, amount;
	cout << "Enter value of m=";
	cin >> m;
	cout << "Enter value of n=";
	cin >> n;
	cout << "Enter value of p=";
	cin >> p;
	cout << "Enter the value of amount=";
	cin >> amount;
	cout << "The solution is=" << (m+n)/(p+amount);
	return 0;
}