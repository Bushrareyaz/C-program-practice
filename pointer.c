/*
#include <stdio.h>

int main()
{
    int a = 10;

    int *p = &a;
    int **q = &p;

    printf("Value of a = %d\n", a);
    printf("Using pointer = %d\n", *p);
    printf("Using double pointer = %d\n", **q);

    return 0;
}

#include<stdio.h>
int main(){
    int a = 10;
    int *p;
    p=&a;
    printf("value of a=%d\n",a);
    printf("value of a = %d\n",(void*)&a);
    printf("value of p is=%d\n",(void*)p);
    printf("value using pointer =%d\n",*p);
    return 0;
}
    
// change value using pointer.
#include<stdio.h>
int main(){
    int a=10;
    int *p=&a;
    *p=50;
    printf("%d",a);
    return 0;
} 

//swapping two numbers
#include<stdio.h>
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void){
    int a=10,b=20;
    printf("before swapping:a=%d b=%d\n",a,b);
    swap(&a,&b);//function call
    printf("after swapping:a=%d b=%d\n",a,b);
    return 0;
} 
    
//ARRAY AND POINTER.//increment and decrement values
#include<stdio.h>
int main(){
    int a[3]={10,20,30};
    int *p=a;
    printf("%d\n",*p);
    p++;
    printf("%d\n",*p);
    p++;
    printf("%d\n",*p);
    return 0;

}   

//print character using pointer.
#include<stdio.h>
int main(){
    char str[] = "hello";
    char *p = str;
    while(*p != '\0'){
        printf("%c",*p);
        p++;
    }
    return 0;
}
    
//array to pointer...element store the address of another variable
#include<stdio.h>
int main(){
    int a=10,b=20,c=30;
    int *p[3];
    p[0]=&a;
    p[1]=&b;
    p[2]=&c;
    printf("%d\n",*p[0]);
    printf("%d\n",*p[1]);
    printf("%d\n",*p[2]);
    return 0;
}
  
  
//pointer to pointer....store value of one pointer to another pointer
#include<stdio.h>
int main(){
    int a=10;
    int *p=&a;
    int **q=&p;
    printf("using double pointer=%d\n",**q);
    return 0;

}
    */
// pointer to function
#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int main(){
    int(*p)(int,int);
    p=add;
    printf("sum=%d", (*p)(10, 20));
    return 0;
}
    






