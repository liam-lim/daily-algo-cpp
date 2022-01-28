#include<iostream>
using namespace std;

void selectionSort(int arr[], int n) {

    for (int i=0; i<n-1; i++) {
        int minIndex = i;
        for (int j=i+1; j<n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
}  

int main() {
    int arr[] = {-2,3,4,-1,5,-12,6,1,3,2};
    int n = sizeof(arr)/sizeof(int);

    selectionSort(arr, n);

    for (int i=0; i<n; i++) {
        cout << arr[i] << ',';
    }
} 