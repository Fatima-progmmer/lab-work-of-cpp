#include <iostream>
using namespace std;
int main()
{
	double Radius[10], Area[10];
	double *radius = Radius;
	double *area = Area;
	cout << "Enter the radius of 10 circles: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> *(radius + i);
		*(area + i) = 3.14159 * *(radius + i) * *(radius + i);
	}
	cout << "Calculated areas for 10 circles:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "Circle " << i + 1 << " with radius " << *(radius + i) << " has area " << *(area + i) << endl;
	}
	return 0;
}