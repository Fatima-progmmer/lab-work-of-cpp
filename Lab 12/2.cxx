#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string original_str;
    string str_new;
    string str_old;
    cout << "Enter a string: ";
    getline(cin, original_str);
    cout << "Enter the string to replace: ";
    getline(cin, str_new);
    cout << "Enter the replacement string: ";
    getline(cin, str_old);
      size_t index = 0;
    while (true)
     {
        index = original_str.find(str_new, index);
        if (index == string::npos)
         {
            break;
        }
        original_str.replace(index, str_new.length(), str_old);
        index += str_old.length();
    }
    cout << "Updated string: " << original_str << endl;
    return 0;
}