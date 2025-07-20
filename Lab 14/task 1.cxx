#include <iostream>
#include <string>
using namespace std;
struct book
{
	long book_id;
	string book_name;
	string book_author;
	double book_price;
};
int main()
{
	book record[10];
	for (int x = 1; x <= 10; x++)
	{
		cout << "\n\t\tEnter " << x << " record \n";
		cout << "Enter " << x << " book I'd= ";
		cin >> record[x].book_id;
		cout << "Enter " << x << " book name = ";
		cin >> record[x].book_name;
		cout << "Enter " << x << " book author name = ";
		cin >> record[x].book_author;
		cout << "Enter " << x << " book price = ";
		cin >> record[x].book_price;
	}
		cout << "\n\n\t\t Name of author that is same";	
	for(int x=1;x<=10;x++)
	{
	if(record[x].book_author==record[x++].book_author)
	cout << record[x].book_author << endl;
	}
	return 0;
}