/* even odd
#include<stdio.h>
int main() {
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(num%2==0){
        printf("number is even");
    }else{
        printf("number is odd");
    }
    return 0;
}

largest of two numbers

#include<stdio.h>
int main(){
    int a=5,b=8;
    if(a>b){
        printf("a is largest");
    }else{
        printf("b is largest");
    }
    return 0;
}

largest of three numbers
    
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter 3 numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("%d is largest", a);
        }else{
            printf("%d is largest", c);
        }
    }else{
        if(b>c){
            printf("%d is largest", b);
        }else{
            printf("%d is largest", c);
        }

    }
    
    return 0;
}    
  
 
  // check for leap year
#include<stdio.h>
int main(){
    int year;
    printf("enter year:");
    scanf("%d",&year);
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        printf("%d is leap year",year);
    }else{
        printf("%d is not a leap year",year);
    }
    return 0;
} 

// print 1 to N
#include<stdio.h>
int main() {
    int num;
    printf("enter num till you want : ");
    scanf("%d",&num);
    for(int i = 1;i <= num ;i++){
        printf("%d\n",i);
    }
} 

//Sum of first N natural numbers
#include<stdio.h>
#include<stdio.h>
int main(){
    int a;
    int sum=0;
    printf("enter numbers to print sum:");
    scanf("%d",&a);
    for(int i = 1 ; i <= a ; i++){
        sum+=i;
    }
    printf("sumof natural numbers are %d",sum);
    return 0;
}    
    
//factorial
#include<stdio.h>
int main(){
    int fact = 1;
    int num ;
    printf("enter number");
    scanf("%d",&num);
    if(num<1){
        printf("factorial not valid");
    }else{
        for(int i = 1 ;i <= num ; i++){
            fact*=i;
        }
        printf("factorial is %d",fact);
    }
    return 0;    
} 
    
// multiplication table

#include<stdio.h>
int main() {
    int table;
    printf("Enter number to print table:");
    scanf("%d",&table);
    
    for(int i = 1; i<=10; i++){
        printf("%d * %d = %d\n", table, i, table * i);
    }
    return 0;
}
    

//  prime number

#include <stdio.h>

int main()
{
    int n, i, prime = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n <= 1)
        prime = 0;

    for (i = 2; i <= n / i && prime == 1; i++)
    {
        if (n % i == 0)
            prime = 0;
    }

    if (prime == 1)
        printf("Prime number");
    else
        printf("Not a prime number");

    return 0;
}

//Reverse a number
#include <stdio.h>

int main() {
    int n, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;//takes last digit 
        reverse = reverse * 10 + digit;//store last digit as first
        n = n / 10;//remove last digit 
    }

    printf("Reversed number = %d", reverse);

    return 0;
}
    
//palindrme
#include <stdio.h>

int main() {
    int n, original, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n > 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (original == reverse) {
        printf("Palindrome number");
    }
    else {
        printf("Not a palindrome number");
    }

    return 0;
}
    */
   #include <stdio.h>

   int main() {
       int n, i;
       int first = 0, second = 1, next;
   
       printf("Enter number of terms: ");
       scanf("%d", &n);
   
       for (i = 1; i <= n; i++) {
           printf("%d ", first);
   
           next = first + second;
           first = second;
           second = next;
       }
   
       return 0;
   }