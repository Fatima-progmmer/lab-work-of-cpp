#include<iostream>
using namespace std;
int main()
{
	int m,n, result=1;
	cout << "Enter a number=";
	cin >> m;
	cout << "how many time you want to multiple?" << endl;
	cin >> n;
	for (int i=1;i<=n;i++)
	{
		result=result*m;
	}
	cout << "Result is " << result;
	return 0;
}