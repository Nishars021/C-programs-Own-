#include <stdio.h>

    int main() {
        int arr[100], n, key, i;
        int *ptr;
        printf("Enter the number of elements in the array: ");
        scanf("%d", &n);
    
        // Input array elements
        printf("Enter %d elements:\n", n);
        for(i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
    
        // Input element to search
        printf("Enter the element to search: ");
        scanf("%d", &key);
    
        // Initialize pointer to the start of array
        ptr = arr;
    
        // Search using pointer
        for(i = 0; i < n; i++) {
            if(*(ptr + i) == key) {
                printf("Element %d found at position %d (index %d)\n", key, i + 1, i);
                return 0;
            }
        }
    
        printf("Element %d not found in the array.\n", key);
        return 0;
    }
    
