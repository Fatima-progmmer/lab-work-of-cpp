#include<iostream>
using namespace std;
int main()
{
	int choice, deposit, withdraw;
	char press;
	cout <<"Press 1 For current account \nPress 2 For saving account" << endl; 
	cin >>choice;
switch (choice)	
	{
		case 1:
	{
	cout <<"The initial amount of opening an account is 2000" <<endl;
	cout <<"Press a For Deposit the money\nPress  b For withdrawing for money" <<endl;
	cin >> press;
	if(press=='a')
	{
	cout <<"How much money you want to deposit?\n" ;
	cin >> deposit;
	cout <<"You are deposit successfully👿";
	}
	else if(press=='b')
	{
		cout << "How many amount you want to withdraw\n" ;
		cin >> withdraw;
		if(withdraw<=10000)
		cout <<"🤚🤚You have less amount to withdraw🤚🤚";
		else
		cout <<"\n\n💌Your withdraw request are accepted💌\n" << "\n👿Rs.500 must be available in your account after transaction👿\t";
	}
	break;
	}
	case 2:
	{
	cout <<"The initial amount of opening an account is 5000" << endl;
	cout <<"Press a For Deposit the money\nPress b For withdrawing for money" <<endl;
	cin >> press;	
	if(press!='b')
	{
	cout <<"How much money you want to deposit?\n" ;
	cin >> deposit;
	cout <<"You are deposit successfully😵";
	}
	else if(press!='a')
	{
		cout << "How many amount you want to withdraw\n" ;
		cin >> withdraw;
		if(withdraw<=25000)
		cout <<"🤚🤚You have less amount to withdraw🤚🤚";
		else
		cout <<"\n\n	💙Your withdraw request are accepted💙	\n" << "\n🌼Rs.500 must be available in your account after transaction^🌼\t" <<endl;
	}
	break;
	}
	}
	return 0 ;
}