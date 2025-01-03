#include<iostream>
using namespace std;

int main() 
{
    int row, col;

    cout << "Enter Array's Row Size: ";
    cin >> row;
    
    cout << "Enter Array's col Size: ";
    cin >> col;


    int a[row][col]; 
    int i, j;

    cout << "\n\n";
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            cout << "Enter a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
        cout << "\n";
    }

    int r, r_sum = 0;
    cout << "\n\Enter Row Numebr: ";
    cin >> r;

    for(j = 0; j < col; j++) 
    {
        cout << a[r][j] << " ";
        r_sum += a[r][j];
    }
    cout << "\nThe Sum Of Row " << r << ": " << r_sum << endl;

    
    int c, c_sum = 0;
    cout << "\n\nEnter Column Numebr: ";
    cin >> c;

    for(i = 0; i < row; i++) 
    {
    	
        cout << a[i][c] << " ";
        c_sum += a[i][c];
        
    }
    cout << "\nThe Sum Of Column " << c << ": " << c_sum << endl;

}