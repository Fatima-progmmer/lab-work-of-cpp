#include <iostream>
using namespace std;
int isVowel(char ch)
{
	if ((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U') || (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	char character;
	cout << "Enter character : ";
	cin >> character;
	cout << character << "  is a vowel(1 show true and 0 show false)\n\t" << isVowel(character);
	return 0;
}