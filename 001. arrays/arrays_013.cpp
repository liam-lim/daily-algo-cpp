#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {

    int s = 0;
    int e = n - 1;

    while (s <= e) {
        int mid = (s + e)/2;

        if (arr[mid] == key) {
            return mid;
        } else if (key > arr[mid]) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 45, 60, 70, 89};
    int n = sizeof(arr)/sizeof(int);

    int key;
    cin >> key;

    int index = binarySearch(arr, n, key);

    if (index == -1) {
        cout << key << " is not found" << endl;
    } else {
        cout << key << " is at index " << index << endl;
    }
}