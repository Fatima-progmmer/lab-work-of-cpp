#include <iostream>
using namespace std;
int main()
{
	char string[5];
	char y;
	cout << "Enter 5 characters: " << endl;
	for (int i = 1; i <= 5; i++)
		cin >> string[i];
	cout << "\nAlphabet to be deleted :";
	cin >> y;
	cout << "\nAfter deletion" <<endl;
	for (int i = 1; i <= 5; i++)
	{
	if (string[i] == y)
		cout <<"\a";
	if (string[i] != y)
		cout << string[i];
	}
	return 0;
}