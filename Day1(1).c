#include <stdio.h>

int main() {
    int n, pos, x;
    int arr[101]; //Array size 101 to allow room for the new element

    //Read the initial number of elements
    scanf("%d", &n);
    
    //Reading 'n' integers into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    //Read the 1-based position (pos) and the value to insert (x)
    scanf("%d %d", &pos, &x);

    /* SHIFTING LOGIC:
       To make room for 'x' at 'pos', we move elements to the right.
       We start from the end (index n) and move backwards to the target position.
       'i >= pos' is used because 'pos' is 1-based. 
       In 0-based indexing, 'pos' is actually index 'pos-1'.*/
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1]; // Move element at i-1 to the right (to index i)
    }

    //Insert the new element at the target index (pos - 1)
    arr[pos - 1] = x;

    /* PRINTING THE RESULT:
       The new size of the array is n + 1. 
       We loop from 0 to n (inclusive) to print all elements.*/
    for (int i = 0; i <= n; i++) {
        printf("%d", arr[i]);
        
        // Print a space only between numbers, not after the last number
        if (i < n) printf(" ");
    }
    printf("\n");

    return 0;
}