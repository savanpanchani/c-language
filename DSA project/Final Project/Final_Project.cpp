#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};


class LinkedList {
private:
    Node* head;
public:
    LinkedList() { head = nullptr; }

    
    void insert(int value) {
        Node* newNode = new Node{value, nullptr};
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) temp = temp->next;
            temp->next = newNode;
        }
    }

   
    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    
    int* toArray(int &size) {
        size = 0;
        Node* temp = head;
        while (temp) {
            size++;
            temp = temp->next;
        }

        int* arr = new int[size];
        temp = head;
        for (int i = 0; i < size; i++) {
            arr[i] = temp->data;
            temp = temp->next;
        }
        return arr;
    }
};


void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1, n2 = right - mid;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int i = 0; i < n2; i++) R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}


int partition(int arr[], int low, int high) {
    int pivot = arr[high], i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) swap(arr[++i], arr[j]);
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}


void menu() {
    LinkedList list;
    int choice, value;

    while (true) {
        cout << "\nMENU:\n";
        cout << "1. Insert element in Linked List\n";
        cout << "2. Display Linked List\n";
        cout << "3. Sort using Merge Sort\n";
        cout << "4. Sort using Quick Sort\n";
        cout << "5. Binary Search\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter value: ";
            cin >> value;
            list.insert(value);
        }
        else if (choice == 2) {
            cout << "Linked List: ";
            list.display();
        }
        else if (choice == 3 || choice == 4) {
            int size;
            int* arr = list.toArray(size);
            if (size == 0) {
                cout << "List is empty!\n";
                continue;
            }
            if (choice == 3) mergeSort(arr, 0, size - 1);
            else quickSort(arr, 0, size - 1);
            cout << "Sorted Array: ";
            for (int i = 0; i < size; i++) cout << arr[i] << " ";
            cout << "\n";
            delete[] arr;
        }
        else if (choice == 5) {
            int size, key;
            int* arr = list.toArray(size);
            if (size == 0) {
                cout << "List is empty!\n";
                continue;
            }
            mergeSort(arr, 0, size - 1);
            cout << "Enter value to search: ";
            cin >> key;
            int index = binarySearch(arr, 0, size - 1, key);
            if (index != -1) cout << "Value found at index " << index << "\n";
            else cout << "Value not found!\n";
            delete[] arr;
        }
        else if (choice == 6) break;
        else cout << "Invalid choice! Try again.\n";
    }
}

int main() 
{
    menu();
    
}