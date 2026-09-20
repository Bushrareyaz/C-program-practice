//finding largest integer.
#include<stdio.h>
int main() {
    int i,j,k,l,m ;
    printf("enter 5 integers:");
    scanf("%d %d %d %d %d",&i,&j,&k,&l,&m);
    int largest = i ;
    if(j>largest) {
        largest=j;
    }
    else if(k>largest) {
        largest=k;
     }
    else if(l>largest) {
        largest=l;
     }
    else if(m>largest) {
        largest=m;
    }
    printf("largest number is :%d\n ",largest);
    return 0;
}



//grade calculator.
#include<stdio.h>
int main() {
    int marks ;
    printf("Enter your marks:");
    scanf("%d",&marks);
    if(marks>=80 && marks<=100) {
        printf("Your grade is A ");
    }
    else if(marks>=60 && marks<=79) {
        printf("Your grade is B ");
    }
    else if(marks>=50 && marks<=59) {
        printf("Your grade is B ");
    }
    else if(marks>=40 && marks<=49) {
        printf("Your grade is C");
    }
    else if(marks>=0 && marks<=39) {
        printf("Your grade is D ");
    } 
    else {              
        printf("incorrect input: please enter marks between 0 to 100:");  
    }
       return 0; 

} 



//color choice.
#include<stdio.h>
int main() {
    char colors ;
    printf("Enter the colour w for white,b for blue,r for red,g green,o for orange:");
    scanf("%c",&colors);
    char w,W,b,B,R,r,G,g,O,o ;
    if(colors=='w'|| colors =='b' || colors=='r' || colors=='W' || colors=='B' || colors=='R' ) {
        printf("I like the color");    
    }
    else if(colors=='G'|| colors=='g' || colors=='o' || colors=='O' ) {
        printf("I don't like the color");
    }
    else {
        printf("I dont like the color");
    }
    return 0;
}



