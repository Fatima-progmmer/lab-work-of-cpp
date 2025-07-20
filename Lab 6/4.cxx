#include <iostream>
using namespace std;

int main() 
{
   unsigned product= 1;

   for (int i = 1; i <= 50; i++)
    {
      if (i % 2 != 0) 
    {
         product *= i; 
      }
   }
   cout << "The product of all odd numbers from 1 to 50 is: " << product << endl;
 return 0;
}