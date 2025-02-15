#include <iostream>
using namespace std;

class Stack {
protected:
    int* arr;   
    int topIndex; 
    int size; 

public:
    Stack(int s) { 
        size = s;
        arr = new int[size];
        topIndex = -1;
    }

    virtual ~Stack() {
        delete[] arr;
    }

    virtual void push(int value) {
        if (isFull()) {
            cout << "Stack Is Full! Cannot Push " << value << endl;
        } else {
            arr[++topIndex] = value;
            cout << value << " Pushed Into Stack.\n";
        }
    }

    virtual void pop() {
        if (isEmpty()) {
            cout << "Stack Is Empty! Cannot Pop.\n";
        } else {
            cout << "Popped: " << arr[topIndex--] << endl;
        }
    }

    virtual int top() {
        if (!isEmpty()) {
            return arr[topIndex];
        }
        cout << "Stack Is Empty! No Top Element.\n";
        return -1; 
    }

    bool isEmpty() {
        return topIndex == -1;
    }

    bool isFull() {
        return topIndex == size - 1;
    }
};



class DerivedStack : public Stack {
public:
    DerivedStack(int s) : Stack(s) {} 

    void push(int value) override {
        cout << "Derived Class Push Method Called.\n";
        Stack::push(value);
    }

    void pop() override {
        cout << "Derived Class Pop Method Called.\n";
        Stack::pop();
    }
};

int main() {
    int maxSize;
    cout << "Enter Stack Size: ";
    cin >> maxSize;

    DerivedStack s(maxSize);

    int choice, value;
    do {
        cout << "\n1. Push.";
		cout << "\n2. Top.";
		cout << "\n3. Pop.";
		cout << "\n4. Check Empty.";
		cout << "\n5. Check Full.";
		cout << "\n6. Exit.....\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Value To Push: ";
                cin >> value;
                s.push(value);
                break;
            case 2:
            	cout << "Top Element: " << s.top() << endl;
                break;
            case 3:
                s.pop();
                break;
            case 4:
                cout << (s.isEmpty() ? "Stack Is Empty...\n" : "Stack Is Not Empty...\n");
                break;
            case 5:
                cout << (s.isFull() ? "Stack Is Full...\n" : "Stack Is Not Full...n");
                break;
            case 6:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid Choice! Try Again...\n";
        }
        
    } while (choice != 6);

}