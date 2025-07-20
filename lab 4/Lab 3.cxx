#include<iostream>
using namespace std;
int main()
{ 
	int salary, max=100000, min=100;
	for (int i=1;i<=10;i++)
	{
		cout <<"Enter " << i << " employee salary=";
		cin >> salary;
		if(min<salary)
		min=salary;
		if(max>salary)
		max=salary;
	}
	cout << "\nThe maximum salary is " << min;
	cout <<"\nThe minimum salary is " << max;
	return 0;
} 