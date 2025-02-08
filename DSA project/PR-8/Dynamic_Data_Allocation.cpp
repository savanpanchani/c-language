#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class DynamicMemoryAllocation {
private:
    Node* head; 
    

public:
    DynamicMemoryAllocation() 
	{
        head = nullptr;
    }


    void insert_at_beginning(int val) 
	{
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }


    void append(int val) 
	{
        Node* newNode = new Node(val);
        if (head == nullptr)
		{
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) 
		{
            temp = temp->next;
            
        }
        temp->next = newNode;
        
    }

    bool search(int key) 
	{
        Node* temp = head;
        while (temp != nullptr) 
		{
            if (temp->data == key)
                return true;
            temp = temp->next;
            
        }
        return false;
        
    }

    void delete_node(int key) 
	{
        if (head == nullptr) return;

        if (head->data == key) 
		{
			
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
            
        }

        Node* temp = head;
        while (temp->next != nullptr && temp->next->data != key) 
		{
            temp = temp->next;
        }

        if (temp->next == nullptr) return;

        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
        
    }

    void reverse() 
	{
        Node* prev = nullptr;
        Node* curr = head;
        Node* next = nullptr;

        while (curr != nullptr) 
		{
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    ~DynamicMemoryAllocation() {
        Node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
            
        }
    }
};

int main() {
    DynamicMemoryAllocation list;
        

    list.append(10);
    list.append(20);
    list.append(30);
    
    
    cout << "Linked List after appending: ";
    list.display();
    
    
    list.insert_at_beginning(5);
    cout << "After inserting at beginning: ";
    list.display();
    
    
    cout << "Searching 20: " << (list.search(20) ? "Found" : "Not Found") << endl;
    cout << "Searching 120: " << (list.search(120) ? "Found" : "Not Found") << endl;
    
    
    list.delete_node(20);
    cout << "After deleting 20: ";
    list.display();
    
    
    list.reverse();
    cout << "After reversing the list: ";
    list.display();
    

}