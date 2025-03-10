#include <iostream>
#include <vector>

using namespace std;



void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}



void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    
    vector<int> leftArr(n1), rightArr(n2);
    
    
    for (int i = 0; i < n1; i++) leftArr[i] = arr[left + i];
    for (int i = 0; i < n2; i++) rightArr[i] = arr[mid + 1 + i];
    
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }
    
    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}


void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}


int linearSearch(vector<int>& arr, int key) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key) return i;
    }
    return -1;
}


int binarySearch(vector<int>& arr, int key) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}


void displayArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}


int main() {
    vector<int> arr;
    int choice, size, key, index;

    do {
        cout << "\nMenu:\n";
        cout << "1. Enter Array\n";
        cout << "2. Selection Sort\n";
        cout << "3. Merge Sort\n";
        cout << "4. Linear Search\n";
        cout << "5. Binary Search\n";
        cout << "6. Display Array\n";
        cout << "7. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Size Of Array: ";
                cin >> size;
                arr.resize(size);
                cout << "Enter Elements: ";
                for (int i = 0; i < size; i++) cin >> arr[i];
                break;
            case 2:
                selectionSort(arr);
                cout << "Array Sorted Using Selection Sort.\n";
                break;
            case 3:
                mergeSort(arr, 0, arr.size() - 1);
                cout << "Array Sorted Using Merge Sort.\n";
                break;
            case 4:
                cout << "Enter Element To Search: ";
                cin >> key;
                index = linearSearch(arr, key);
                if (index != -1) cout << "Element Found At Index " << index << endl;
                else cout << "Element Not Found.\n";
                break;
            case 5:
                cout << "Enter Element To Search: ";
                cin >> key;
                index = binarySearch(arr, key);
                if (index != -1) cout << "Element Found At Index " << index << endl;
                else cout << "Element Not Found.\n";
                break;
            case 6:
                cout << "Array: ";
                displayArray(arr);
                break;
            case 7:
                cout << "Exiting Program...\n";
                break;
            default:
                cout << "Invalid Choice. Try Again.\n";
        }
    } while (choice != 7);


}