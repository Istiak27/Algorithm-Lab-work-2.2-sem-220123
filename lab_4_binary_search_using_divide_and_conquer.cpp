#include <iostream>
using namespace std;

int binarySearchDAC(int arr[], int low, int high, int target) {
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;
    if (arr[mid] == target)
        return mid;
    else if (arr[mid] > target)
        return binarySearchDAC(arr, low, mid - 1, target);
    else
        return binarySearchDAC(arr, mid + 1, high, target);
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements of the array (sorted):\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target element to search: ";
    cin >> target;
    int result = binarySearchDAC(arr, 0, n - 1, target);
    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}

