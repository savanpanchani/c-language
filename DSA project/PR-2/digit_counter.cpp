#include<iostream>
using namespace std;

int main() {
	
    int number, count = 0;
    
    cout << "Enter Any Number: ";
    
    cin >> number;
    
    if (number == 0) {
        count = 1;
    } 
	else {
        while (number != 0) {
            number /= 10;
            count++;
        }
    }
    
    cout << "Total Number OF Digits: " << count << endl;
    
    return 0;
}