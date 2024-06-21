// 1. Array Inititalization with Declartion :-

// data_type array_name [size] = {val1, val2, .... valN};

// 2. Array Inititalization with Declartion without Size :-

// data_type array_name = {val1, val2, .... valN};

// 3. Array Initialization after Declartion (Using loops)

// for (int i = 0; i< N; i++) {
//     array_name[i] = val i
// }

#include <stdio.h>

int main() {

    int arr[5] = {10, 20, 30, 40, 50};
    int arr1[] = {1, 2, 3, 4, 5};

    float arr2[5];
    for (int i = 0; i < 5; i++)
    {
        arr2[i] = (float)i * 2.1;
    }
    return 0;
        
}