#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main()
{
	char str[21];
	cout << "Enter a string of at least 20 characters: ";
	cin.getline(str, 21);
	int length = strlen(str);
	cout << "Length of string: " << length << endl;
	cout << "String in reverse order: ";
	for (int i = length - 1; i >= 0; i--)
	{
		cout << str[i];
	}
	cout << endl;
	strcat(str,  " Hello World");
	int num_words = 0;
	bool in_word = false;
	for (int i = 0; i < strlen(str); i++)
	{
		if (isalpha(str[i]))
		{
			if (!in_word)
			{
				in_word = true;
				num_words++;
			}
		}
		else
		{
			in_word = false;
		}
	}
	cout << "Number of words in updated string: " << num_words << endl;
	for (int i = 0; i < strlen(str); i++)
	{
		str[i] = tolower(str[i]);
	}
	cout << "Updated string in lowercase: " << str << endl;
	return 0;
}