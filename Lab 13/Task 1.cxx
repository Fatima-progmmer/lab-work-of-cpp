#include <iostream>
using namespace std;
int main() 
{
   int monthSize;
   cout << "Enter the size of the array: ";
   cin >> monthSize;
   int *month = new int[monthSize];
   int *tempPtr = month;
   for (int i = 0; i < monthSize; i++) 
   {
      cout << "Enter temperature for day " << i+1 << ": ";
      cin >> *(tempPtr + i);
   }
 int minTemp = *month;
   int maxTemp = *month;
   float sumTemp = 0;
   for (int i = 0; i < monthSize; i++)
    {
      if (*(tempPtr + i) < minTemp) 
      {
         minTemp = *(tempPtr + i);
      }
      if (*(tempPtr + i) > maxTemp) 
      {
         maxTemp = *(tempPtr + i);
      }
      sumTemp += *(tempPtr + i);
   }
   sumTemp=sumTemp/2;
   cout << "Lowest temperature: " << minTemp << endl;
   cout << "Highest temperature: " << maxTemp << endl;
   cout << "Average temperature: " << sumTemp << endl;
   return 0;
}