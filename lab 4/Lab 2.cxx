#include<iostream>
using namespace std;
int main()
{
	int percent;
	cout << "Enter your percentage=";
	cin >> percent;
	
	if(percent>=90)
	cout << "You have A grade";
	
	else if((percent>=86)&&(percent<=90))
	cout << "You have A- grade";
	
	else if((percent>=81)&&(percent<=86))
	cout <<"You have B+ grade";
	
	else if((percent >=77)&&(percent<=81))
	cout <<"You have B grade";
	
	else if((percent>=72)&&(percent<=77))
	cout <<"You have B- grade";
	
	else if((percent>=68)&&(percent<=72))
	cout <<"You have C+ grade" ;
	
	else if((percent>=63)&&(percent<=68))
	cout << "You have C grade";
	
	else if((percent>=58)&&(percent<=63))
	cout <<"You have C- grade";
	
	else if((percent>=54)&&(percent<=58))
	cout <<"You have D+ grade";
	
	else if((percent>=50)&&(percent<=54))
	cout <<"You have D grade";
	
	else
	cout <<" You are fail";
		
	return 0;
}