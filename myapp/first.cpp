#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size, int key)
{
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {3,6,23,35,42,88,155,434,570,678,732,755,812,834,900,945};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Enter the key to search: ";
    cin >> key;

    int linearIndex = linearSearch(arr, size, key);
    if (linearIndex != -1) {
        cout << "Linear Search: Found at index " << linearIndex << endl;
    } else {
        cout << "Linear Search: Not found" << endl;
    }

    int binaryIndex = binarySearch(arr, size, key);
    if (binaryIndex != -1) {
        cout << "Binary Search: Found at index " << binaryIndex << endl;
    } else {
        cout << "Binary Search: Not found" << endl;
    }

    return 0;
}
