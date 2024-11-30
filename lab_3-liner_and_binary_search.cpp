#include <iostream>
#include <algorithm>
using namespace std;


int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}


int binarySearch(int arr[], int size, int key) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the key is at mid
        if (arr[mid] == key) {
            return mid;
        }

        // If key is greater, ignore the left half
        if (arr[mid] < key) {
            left = mid + 1;
        }
        // If key is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    int size;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];


    cout << "Enter " << size << " elements of the array:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int key;


    cout << "Enter the key to search: ";
    cin >> key;


    cout << "Performing linear search...\n";
    int linearResult = linearSearch(arr, size, key);
    if (linearResult != -1) {
        cout << "Key found at index " << linearResult << " using linear search.\n";
    } else {
        cout << "Key not found using linear search.\n";
    }


    sort(arr, arr + size);


    cout << "Performing binary search...\n";
    int binaryResult = binarySearch(arr, size, key);
    if (binaryResult != -1) {
        cout << "Key found at index " << binaryResult << " using binary search (sorted array).\n";
    } else {
        cout << "Key not found using binary search.\n";
    }

    return 0;
}
