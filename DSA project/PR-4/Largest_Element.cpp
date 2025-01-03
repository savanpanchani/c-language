#include<iostream>
using namespace std;

int main() 
{
	int a[50][50];
    
    int i,j;
	
	int row,col,n;

    cout << "Enter Array's Row Size: ";
    cin >> row;
    
    cout << "Enter Array's col Size: ";
    cin >> col;


    cout << "\nEnter array's elements:\n";
    
    for(i = 0; i < row; i++) 
    {
    	for(j = 0; j < col; j++)
    	{
    	    cout << "Enter value a[" << i << "][" << j << "] = ";
        	cin >> a[i][j];	
		}
    }
    
    n = a[0][0];

    for(i = 0; i < row; i++) 
    {
        for(j = 0; j < col; j++) 
        {
            if(n < a[i][j]) 
            {
                n = a[i][j];
            }
        }
    }

    cout << "\nThe Largest Element Is: " << n << endl;
}
	
