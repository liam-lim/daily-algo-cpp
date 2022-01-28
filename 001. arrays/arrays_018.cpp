#include<iostream>
using namespace std;

int findLargestSubarraySum(int arr[], int n) {

    int prefixSum[100];
    prefixSum[0] = arr[0];

    for (int i=1; i<n; i++) {
        prefixSum[i] = prefixSum[i-1] + arr[i];
    } 

    int largestSum = 0;

    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
           int currentSum = i==0 ? prefixSum[i] : prefixSum[j] - prefixSum[i-1];
           largestSum = max(currentSum, largestSum);
        }
    }

    return largestSum;
}  

int main() {
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);

    int largestSum = findLargestSubarraySum(arr, n);

    cout << largestSum;
} 