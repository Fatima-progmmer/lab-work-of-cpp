#include<iostream>
using namespace std;
int main()
{
 int age,choice,day,hour;
  cout <<"Which are you type of employe?\n1.retired\n 2.empolyee\nYour choice is=";
 cin >> choice;
 
 switch(choice)
 
 {
 	case 1:
 	{
 	cout << "Enter your age=";
 	cin >> age;	
 	if ((age>=60)&&(age<=70))
 	{
 	cout <<"Your passion is 30,000" <<endl;
 	}
 	 if(age>=70)
 	 {
 	cout << "Your passion is 40,000" << endl;
 	 }
 	break;
 }
 
 case 2:
  {
 	cout << "Enter the days of present=";
 	cin >> day;
 	if((day<=30)||(day==30))
 	{
 	cout << "Your days payment is " << day*1000 << endl;
 	cout << "Enter the extra hour work=";
 	cin >> hour;
 		if((hour<=3)||(hour==3))
 		{
 	cout << "Your extra work payment is " << day*hour*300<< endl;
 		cout <<"Your monthly salary is=" <<day*1000+day*hour*300;
 		}
 	}
 	break;
 }
 }
 return 0;
}