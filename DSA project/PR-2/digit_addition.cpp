#include<iostream>
using namespace std;

int main() {
    int num, first, last, sum;
    
    cout << "Enter Any Number : ";
    cin >> num;
    
    last = num % 10; 
    
    while (num >= 10) {
    	
        num = num / 10;  
        
    }
    
    first = num; 
    
    sum = first + last; 
    
    cout << "\nSum of the first and the last digi = " << sum << endl;

}
