#include <stdio.h>

int main() {
    //n: size of array, k: target value to find, comparisons: counter for search steps
    int n, k, comparisons = 0;
    int arr[100];
    
    //Initialize 'found' to -1. If it stays -1, the element wasn't in the array.
    // If found, it will store the 0-based index.
    int found = -1;
    
    //Read the number of elements
    scanf("%d", &n);
    
    //Filling the array with n integers
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    //Read the value 'k' that we want to search for
    scanf("%d", &k);
    
    /* LINEAR SEARCH LOGIC:
       We loop through the array from the first element to the last.*/
    for (int i = 0; i < n; i++) {
        comparisons++; // Increment count for every element we check
        
        if (arr[i] == k) {    // If current element matches the target
            found = i;        // Store the current index
            break;            // Stop searching immediately once found
        }
    }
    
    //Check the 'found' variable to see if the search was successful
    if (found != -1) {
        printf("Found at index %d\n", found);
    } else {
        printf("Not Found\n");
    }
    
    //Print the total number of comparisons (steps) taken
    printf("Comparisons = %d\n", comparisons);
    
    return 0;
}