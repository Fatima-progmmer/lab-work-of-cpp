#include<iostream>
using namespace std;
int main()
{
	int choice, monthly;
	cout << "Enter your monthly salary =";
	cin >> monthly;
	cout << "Press 1 to calculate gas bill chatges\nPress 2 to calculate electricity charges bill\nPress 3 to calculate fueling charges\nPress 4 to calculate house rant charges" << endl;
	cin >> choice;
	switch(choice)
	{
		case 1:
		cout << "Your gas bell is " << monthly/100*10;
		break;
		case 2:
		cout << "Your electricity bill is" << monthly/100*5;
		break;
		case 3:
		cout << "Your fueling charges are " << monthly/100*10;
		break;
		case 4:
		cout << "Your house rant charges are " << monthly /100*15;
	}
	return 0;
}