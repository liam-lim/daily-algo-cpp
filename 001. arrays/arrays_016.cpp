#include<iostream>
using namespace std;

void printAllSubArrays(int arr[], int n) {

    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
           for (int k=i; k<=j; k++) {
                cout << arr[k] << ","; 
           }
           cout << endl;
        }
        cout << endl;
    }
}  

int main() {
    int arr[] = {10, 20, 30, 40, 45, 60, 70, 89};
    int n = sizeof(arr)/sizeof(int);

    printAllSubArrays(arr, n);
} 