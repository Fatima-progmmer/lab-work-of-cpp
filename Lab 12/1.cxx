#include <iostream>
using namespace std;
int main()
{
	char tanz[15];
	cout << "Enter a letter (15)" << endl;
	int a = 0, e = 0, i = 0, o = 0, u = 0, v = 0;
	for (int i = 1; i <= 15; i++)
	{
		cin >> tanz[i];
		if ((tanz[i] == 'a') || (tanz[i] == 'A'))
		{
			a++;
			v++;
		}
		if ((tanz[i] == 'e') || (tanz[i] == 'E'))
		{
			e++;
			v++;
		}
		if ((tanz[i] == 'i') || (tanz[i] == 'I'))
		{
			i++;
			v++;
		}
		if ((tanz[i] == 'o') || (tanz[i] == 'O'))
		{
			o++;
			v++;
		}
		if ((tanz[i] == 'u') || (tanz[i] == 'U'))
		{
			u++;
			v++;
		}
	}
	cout << "Total vowel that you entered= " << v << endl;
	cout << "A = " << a << endl;
	cout << "E = " << e << endl;
	cout << "I = " << i << endl;
	cout << "O = " << o << endl;
	cout << "U = " << u << endl;
	return 0;
}