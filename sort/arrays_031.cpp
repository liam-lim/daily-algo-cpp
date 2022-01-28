#include<iostream>
#include<algorithm>
using namespace std;  

int main() {
    int arr[] = {-2,3,4,-1,5,-12,6,1,3,2};
    int n = sizeof(arr)/sizeof(int);

    sort(arr, arr+n);
    reverse(arr, arr+n);

    for (int i=0; i<n; i++) {
        cout << arr[i] << ',';
    }

    cout << *arr;
} 