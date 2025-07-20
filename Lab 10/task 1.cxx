#include <iostream>
using namespace std;
double sales_prices(double price, double tax)
{
	int taxamount = price * (tax / 100);
	int saleprice = price + taxamount;
	return saleprice;
}
int main()
{
	int finalprice = sales_prices(346, 10);
						 cout
					 << "sale price is " << finalprice;
	return 0;
}