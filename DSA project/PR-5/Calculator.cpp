#include <iostream>
using namespace std;

void cal() {
    int p, a, b;

    do {
        cout << "1. for + \n";
        cout << "2. for - \n";
        cout << "3. for * \n";
        cout << "4. for / \n";
        cout << "5. for % \n";
        cout << "0. EXIT \n";
        
        cout << "Enter Your Choice:";
        cin >> p;
        
        if (p >= 1 && p <= 5) {
            cout << "Enter the first number: ";
            cin >> a;
            cout << "Enter the second number: ";
            cin >> b;
            
            switch(p) {
                case 1:
                    cout << "Addition Is: " << a + b << endl;
                    break;
                case 2:
                    cout << "Subtraction Is: " << a - b << endl;
                    break;
                case 3:
                    cout << "Multiplication Is: " << a * b << endl;
                    break;
                case 4:
                    if (b != 0) {
                        cout << "Division Is: " << a / b << endl;
                    } else {
                        cout << "Error! Division by zero.\n";
                    }
                    break;
                case 5:
                    cout << "Percentage Is: " << (a * 100) / b << "%" << endl;
                    break;    
            }
        } else {
            cout << "Enter Valide Number.\n";
        }
    } while (p != 0);
}

int main() {
    cal();
}