#include<iostream>
using namespace std;
int main()
{
	int days, choice;
	cout << "Enter the number of days=";
	cin>>days;
	cout << "What do you want?\n1.Convert into honur\n2.Convert into minutes" << endl;
	cin >> choice;
	switch(choice)
	{
		case 1:
		cout <<"The hour in days is " << days*24;
		break;
		case 2:
		cout <<"The minutes in days " << days*24*60;
		break;
	}
	return 0;
}