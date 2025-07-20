#include<iostream>
using namespace std;
int main()
{
	int choice, permanenthour, wdgehour;
	char want;
	do
	{
	cout <<"Which type of employe you are?\n1.permanant\n2.daily wages\n";
	cin >> choice;
	switch(choice)
	{
	case 1:
	{
	cout << "Enter your daily working hour =";    cin >> permanenthour;
	cout << "You medical allowance is 5%"<< endl;
	cout << "You total salary is " <<5/100*permanenthour+permanenthour*800;
    break;
	}
	case 2:
	{
		cout << "Enter your daily working hour=";
		cin >> wdgehour;
		cout << "You medical allowance is 3%" << endl;
		cout << "You total salary is " <<3/100*wdgehour+wdgehour*400;
		break ;
	}
	}
	cout <<"\nDo you want to continuous?\n";
	cin >> want;
	}
	while (want!='n');
	return 0;
}