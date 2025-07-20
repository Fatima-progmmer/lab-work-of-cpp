#include <iostream>
using namespace std;
int main()
{
    int matrix[4][4];
    int transpose[4][4];
    int i,j;
    cout << "Enter the elements of the matrix:" << endl;
    for ( i = 1; i <=4; i++)
    {
        for (j = 1; j <=4; j++)
        {
            cin >> matrix[i][j];
        }
    }
     cout << "Entered matrix are " << endl;
    for ( i = 1; i <= 4; i++)
    {
        for ( j = 1; j <= 4; j++)
        {
            cout  << matrix[i][j] <<" ";
            if(j==4)
            cout << endl;
        }
    }
    for (i = 1; i <= 4; i++)
    {
        for ( j = 1; j <= 4; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    cout << "Transpose of the matrix:" << endl;
    for (i = 1; i <= 4; i++)
    {
        for ( j = 1; j <= 4; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
