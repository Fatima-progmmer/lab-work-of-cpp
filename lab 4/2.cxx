#include<iostream>
using namespace std;
int main()
{
	int x,y;
	for (x=1;x<=5;x++)
	{
	cout <<"Enter a " << x << " number =";
	cin >> y;
	if(y%3==0)
		cout  << y << " Number is divisible by 3\n" <<endl;
	if(y%3!=0)
	cout << y << " Number is not divisible by 3" <<endl;
	}
	return 0;
}