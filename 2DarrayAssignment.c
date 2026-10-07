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

//code 3 ; multiplication of 2  matrices of 3x3 .
#include<stdio.h>
int main(){
    
    int a[3][3]={{1,2,3},{4,5,6,},{7,8,9}};
    int b[3][3]={{9,8,7},{6,5,4},{3,2,1}};
    int c[3][3]={0};
    
    printf("first matrix is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
    
    printf("second matrix is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%4d", b[i][j]);
        printf("\n");
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("multiplication of matrix is:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                printf("%4d",c[i][j]);
            }
        printf("\n");    
    }  
    return 0;
}    

//code 4; program to read a sq matrix of mxn and find if it is a symmetric matrix;
#include <stdio.h>

int main() {
    int a[3][3] = {{1, 2, 3},{2, 5, 6},{3, 6, 9}};
     int i,j,symmetric=1;

    printf(" matrix is:\n");
    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++)
            printf("%d", a[i][j]);
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (a[i][j] != a[j][i])
                symmetric = 0;
        }
    }

    if (symmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}



//code 5; sum of diagonal elements of matrix;
#include <stdio.h>

int main() {
    int a[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
    int i, j;
    int main_sum = 0, other_sum = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
        main_sum += a[i][i];        // main diagonal
        other_sum += a[i][2 - i];   // other diagonal
    }

    printf("\nSum of main diagonal = %d\n", main_sum);
    printf("Sum of other diagonal = %d\n", other_sum);

    return 0;

} 
    
