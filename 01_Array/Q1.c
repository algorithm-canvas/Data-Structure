// Given an array arr of n elements that is first strictly increasing and then maybe strictly decreasing, 
// find the maximum element in the array.

// Note: If the array is increasing then just print the last element will be the maximum value.

// Example:

// Input: array[]= {5, 10, 20, 15}
// Output: 20
// Explanation: The element 20 has neighbors 10 and 15, both of them are less than 20.

#include <stdio.h>

arr[] = {5, 10, 15, 20};

int main() {
    if (arr[1] > arr[2] && arr[0]){
        printf("%d", arr[1]);
    }

    ifelse (arr[2] > arr[1] && arr[3]){
        printf("%d", arr[2]);
    }

}

