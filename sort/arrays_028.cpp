#include<iostream>
using namespace std;

void insertionSort(int arr[], int n) {

    for (int i=1; i<n; i++) {

        int current = arr[i];
        int prevIndex = i - 1;

        while(prevIndex >= 0 and arr[prevIndex] > current) {
            arr[prevIndex + 1] = arr[prevIndex];
            prevIndex--;
        }

        arr[prevIndex + 1] = current;
    }
}  

int main() {
    int arr[] = {-2,3,4,-1,5,-12,6,1,3,2};
    int n = sizeof(arr)/sizeof(int);

    insertionSort(arr, n);

    for (int i=0; i<n; i++) {
        cout << arr[i] << ',';
    }
} 