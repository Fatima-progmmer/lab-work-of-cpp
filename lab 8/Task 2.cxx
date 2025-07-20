#include <iostream>
using namespace std;
int main()
{
	int A[5];
	cout << "Enter values for array A (5 elements): " << endl;
	for (int i = 1;i <=5; i++)
		cin >> A[i];
	for (int i = 1; i <= 5; i++)
	{
		if (A[i] % 3 == 0)
			A[i]=A[i]+1;
			for (int j = 1 + i; j <= 5; j++)
			{
				if (A[i] > A[j])
				{
					int temp;
					temp = A[i];
					A[i] = A[j];
					A[j] = temp;
				}
			}
		}
	cout << "Updated array A (in ascending order): " << endl;
	for (int i = 1; i <= 5; i++)
		cout << A[i] << "  ";
	return 0;
}