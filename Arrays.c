//take input of 5 arrays and print its reverse;
#include<stdio.h>
int main() {
    int arr[5] ;
    for(int i=0;i<=4;i++) {
        printf("enter element number:%d\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=4;i>=0;i--) {
        printf("%d\n",arr[i]);

    }
    return 0;


}



//given array of 10 students marks for student get less than 35 print its index as roll no.
#include<stdio.h>
int main() {
    int marks[10] = {55,34,89,39,50,21,89,35,470,71};
    for(int i=0;i<=9;i++) {
        if(marks[i]<35) {
            printf("%d\n",i);
            
        }
    }
    return 0 ;

}