#include <stdio.h>

int main() {
    int n, pos;
    int arr[100];
    
    //Read the number of elements initially in the array
    scanf("%d", &n);
    
    //Read the n elements into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    //Read the 1-based position of the element to be deleted
    scanf("%d", &pos);
    
    /* SHIFTING LEFT (Deletion Logic):
       To delete the element at 'pos', we overwrite it with the element to its right.
       - We start at index 'pos - 1' (the 0-based index of the target).
       - We move every element from its right (i + 1) to the current position (i).
       - The loop runs until 'n - 2' because the last element will be pulled from 'n - 1'.*/
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1]; // Copy the next element into the current slot
    }
    
    /* PRINTING THE RESULT:
       Since one element was removed, the new size of the array is 'n - 1'.*/
    for (int i = 0; i < n - 1; i++) {
        printf("%d", arr[i]);
        
        // Print a space only if it's not the last element to avoid trailing spaces
        if (i < n - 2) printf(" ");
    }
    printf("\n");
    
    return 0;
}