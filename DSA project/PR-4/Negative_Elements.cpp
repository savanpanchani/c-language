#include<iostream>
using namespace std;

int main() 
{
	
    int a[50];
    
    int i, size;

    cout << "Enter Array's Size: ";
    
    cin >> size;

    cout << "\nEnter array's elements:\n";
    
    for(i = 0; i < size; i++) 
    {
        cout << "Enter value a[" << i << "] = ";
        
        cin >> a[i];
    }

    cout << "\n================================\n";
    
    
    cout << "\nNegative Elements From An Array: ";
    
    for(i = 0; i < size; i++) 
    {
    	
        if(a[i] < 0) 
        {	
            cout << a[i] << " ";
            
        }
    }

}