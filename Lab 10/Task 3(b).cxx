#include <iostream>
using namespace std;
void isVowel(char ch)
{
	if ((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U') || (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
		cout << ch << " is vowel";
	else
		cout << ch << " is not a vowel";
}
int main()
{
	char character;
	cout << "Enter character : ";
	cin >> character;
	isVowel(character);
	return 0;
}