#include <iostream>
#include <string>
using namespace std;
int main()
{
	string Phone_No;
	while (true)
	{
		cout << "Enter your contact number in the following pattern: +92XXXYYYYYYY (12 characters)" << endl;
		cin >> Phone_No;
		if (Phone_No.length() != 12)
		{
			cout << "Invalid input. Please enter a 12-character phone number." << endl;
			continue;
		}
		string country_code = Phone_No.substr(0, 3);
		string city_code = Phone_No.substr(3, 2);

		if (country_code != "+92")
		{
			cout << "Unknown number" << endl;
			continue;
		}
		if (city_code == "51")
		{
			cout << "You are from Islamabad" << endl;
		}
		else if (city_code == "42")
		{
			cout << "You are from Lahore" << endl;
		}
		else if (city_code == "21")
		{
			cout << "You are from Karachi" << endl;
		}
		else
		{
			cout << "Unknown number" << endl;
		}
	}
	return 0;
}