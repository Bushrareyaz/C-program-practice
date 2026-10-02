//arrays adress printing
//printf("%p\n",&arr[1])

//sum of elements
#include<stdio.h>
int main() {
    int sum=0;
    int num[5]={2,4,6,3,5};
    for(int i=0;i<=4;i++) {
        sum+=num[i];
    }   
    printf("sum of numbers are:%d",sum);
    return 0;
    
}
