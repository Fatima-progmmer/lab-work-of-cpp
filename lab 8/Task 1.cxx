#include <iostream>
using namespace std;
int main()
{
	int A[20];
	int B[20];
	cout << "  Enter first arrays values" << endl;
	for (int x = 1; x <= 20; x++)
	{
		cin >> A[x];
		int sub;
		sub = A[x] - 2;
		B[x] = sub * sub;
	}
	cout << "  The values in second array\n"
		 << endl;
	for (int x = 1; x < 20; x++)
		cout << B[x] << "   ";
	return 0;
}