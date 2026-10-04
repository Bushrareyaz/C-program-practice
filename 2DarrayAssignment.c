//code 1 ; sum of two arrays stored in third:
#include<stdio.h>
int main() {
    int arr[2][2];
    int brr[2][2];
    int crr[2][2];
    printf("Enter 4 elements of first matrix: ");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &arr[i][j]);
        }
    }    
    printf("Enter 4 elements of second matrix: ");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &brr[i][j]); 
        }
    }   
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            crr[i][j]=arr[i][j]+brr[i][j];
        }
    }
    printf("sum of matrix is:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d",crr[i][j]); 
        }
        printf("\n") ;
    }
    
    return 0;
} 
   
//code 2;
//program to search the given element in 1d array using linear search algorithm.
#include <stdio.h>

int main() {
    int arr[100], n, key, i, found = 0;

    printf("Enter number of elements (max 100): ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear search: check each element one by one
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element %d found at index %d (position %d)\n", key, i, i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
 