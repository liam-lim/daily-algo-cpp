#include<iostream>
using namespace std;

void printAllPairs(int arr[], int n) {

    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            cout << arr[i] << "," << arr[j] << endl; 
        }
        cout << endl;
    }
}  

int main() {
    int arr[] = {10, 20, 30, 40, 45, 60, 70, 89};
    int n = sizeof(arr)/sizeof(int);

    printAllPairs(arr, n);
}