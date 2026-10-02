//searching maximum element in Array.
#include<stdio.h>
int main() {
    int max=-1;
    int arr[6]={3,5,7,4,23,14};
    for(int i=0;i<=5;i++) {
        if (max<arr[i]) {
            max=arr[i];
        } 
    }       
    printf("maximum number is:%d\n",max) ;  
    return 0;
}    