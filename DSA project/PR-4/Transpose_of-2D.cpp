#include<iostream>
using namespace std;

int main() 
{
    int i, j, n;
    int a[10][10];
    int transpose;

    cout << "Enter Array's Row & Column Size : ";
    cin >> n;
    
    cout << "\nEnter Array's Elements:\n";
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            cout << "Enter value a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    for(i = 0; i < n; i++) 
    {
        for(j = i + 1; j < n; j++) 
        {
            transpose = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = transpose;
        }
    }

    cout << "\n=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n";

    cout << "The Transpose Matrix Of An Array:\n";
    for(i = 0; i < n; i++) 
    {
    	
        for(j = 0; j < n; j++) 
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}