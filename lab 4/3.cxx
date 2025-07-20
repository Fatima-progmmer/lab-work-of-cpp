#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout <<"Enter a number 1=";
	cin >> x;
	cout <<"Enter a number 2=";
	cin >> y;
	if(x>=y)
	cout << "Number 1 is maximum and number 2 is minimum";
	else
	cout << "Number 2 is maximum and number 1 is minimum";
	return 0;
}