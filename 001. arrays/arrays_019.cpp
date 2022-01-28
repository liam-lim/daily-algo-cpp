#include<iostream>
using namespace std;

int findLargestSubarraySum(int arr[], int n) {

    int largestSum = 0;
    int currentSum = 0;

    // Kadanes' algorithm
    for (int i=0; i<n; i++) {
        currentSum += arr[i];
        currentSum = max(0, currentSum);
        largestSum = max(largestSum, currentSum);
    }


    return largestSum;
}  

int main() {
    int arr[] = {-2,3,4,-1,5,-12,6,1,3,2};
    int n = sizeof(arr)/sizeof(int);

    int largestSum = findLargestSubarraySum(arr, n);

    cout << largestSum;
} 