#include <iostream>
#include <string>
using namespace std;
struct student
{
	char student_grade;
	string student_name;
	double student_percentage;
};
int main()
{
	student record[20];
	for (int x = 1; x <= 20; x++)
	{
		cout << "\n\t\tEnter " << x << " record \n";
		cout << "Enter " << x << " student name = ";
		cin >> record[x].student_name;
		cout << "Enter " << x << " your percentage = ";
		cin >> record[x].student_percentage;
	}
	cout << "\n\n\t\t Data  of students  that you entered" << endl;
	for (int x = 1; x <= 20; x++)
	{
		cout << "\t*************" << x << "*************" << endl;
		cout << "Name. : " << record[x].student_name << endl;
		cout << "percentage :" << record[x].student_percentage << endl;
		{
			if (record[x].student_percentage >= 90)
				cout << "You have A+ grade" << endl;

			else if ((record[x].student_percentage >= 70) && (record[x].student_percentage <= 89))
				cout << "You have A grade" << endl;

			else if ((record[x].student_percentage >= 50) && (record[x].student_percentage <= 69))
				cout << "You have C grade" << endl;
			else
				cout << " You are fail" << endl;
		}
	}
	return 0;
}