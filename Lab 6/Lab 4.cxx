
#include <iostream>
using namespace std;

int main()
 {
    int row = 4;
    while(row >= 1)
     {
        int star_count = row;
        while(star_count > 0)
         {
            cout << "*";
            star_count--;
        }
         int dash_count = 4 - row;
        while(dash_count > 0) 
        {
            cout << "-";
            dash_count--;
        }
        cout << endl;
        row--;
    }
    return 0;
}