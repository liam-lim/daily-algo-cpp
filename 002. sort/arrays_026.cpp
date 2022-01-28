#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {

    for (int times = 0; times < n-1; times++) {
        for (int i=0; i < n - times - 1; i++) {
            if (arr[i] > arr[i+1]) {
                swap(arr[i], arr[i+1]);
            }
        }
    }
}  

int main() {
    int arr[] = {-2,3,4,-1,5,-12,6,1,3,2};
    int n = sizeof(arr)/sizeof(int);

    bubbleSort(arr, n);

    for (int i=0; i<n; i++) {
        cout << arr[i] << ',';
    }
} 