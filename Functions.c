
#include<stdio.h>
void printhello();//function prototype also void is non returning. 
void printgoodbye();//another function

int main(){
    printhello();//function call (first call got the priority).
    printgoodbye();//another function call
    return 0;
}

void printhello() {
    printf("Helllo\n");//function definition
}
void printgoodbye() {
    printf("goodbye\n");//another function definition bcz we gotta define bro seperately.

}    
  
 
//greet Namaste if indian or greet Bonjour if French.

#include<stdio.h>
void Namaste();
void Bonjour();

int main(){
    printf("Enter your Nationality f or F for french or I or i for Indian:");
    char ch ;
    scanf("%c",&ch);
    if(ch=='i' || ch== 'I'){
        printf("Namaste User!\n");
    }
    else if(ch=='f' || ch=='F'){
        printf("Bonjour User!\n");
    }
    else{
        printf("Invalid!! Enter from given options");
    }
}

void Namaste() {
    printf("Namaste\n");
}
void Bonjour(){
    printf("Bonjour\n");
}

#include<stdio.h>
int sum(int a, int b);
int main() {
    int a,b;
    printf("Enter first number:");
    scanf("%d",& a);
    printf("Enter second number:");
    scanf("%d",& b);
    int s=sum(a,b);//argument or actual parameter 
    printf("sum of integers are:%d",s);
    return 0;
}
int sum(int x, int y) {
    return x + y;
}


//Calculate the power usinf library funtion.
#include<stdio.h>
#include<math.h>
void power(float n,float m);
int main(){
    float n,m;
    printf("Enter base value:");
    scanf("%f", & n);
    printf("Enter power value:");
    scanf("%f", &m);
    power(n,m);
    return 0;
}
void power(float n, float m){
    printf("result is:%f",pow(n,m)) ;
   
}

//program to enter marks of students of 3 subjects and calculate and print average marks.
#include<stdio.h>
float average(int maths,int physics,int chemistry);

int main() {
    int m,p,c;
    int sum;
    printf("Enter maths marks:");
    scanf("%d",&m);
    printf("Enter physics marks:");
    scanf("%d",&p);
    printf("Enter chemistry marks:");
    scanf("%d",&c);
    printf("Average of marks is:%f",average(m,p,c));
    return 0;

}
float average(int maths,int physics,int chemistry){ 
    int sum=maths+physics+chemistry;
    int avg=sum/3;
    return avg;
}



//convert the temp given in fahreheight into celcius using 2nd type of function
//2nd type =void function ( with argumnet )
#include<stdio.h>
void celsius(float f);
int main(){
    float f;
    printf("Enter temperature in fahrenheit");
    scanf("%f",&f);
    celsius(f);
    return 0;
}
void celsius(float f){
    float result;
    result=(f-32)*5/9;
    printf("temp in celsius is %f",result);

}



//program to compute a^x where a and x are input by user inside the main and the function must 
//return computed value in the main.
#include<stdio.h>
int exponent(int a,int x);

int main() {
    int a,x;
    int result;
    printf("enter base number:");
    scanf("%d",&a);
    printf("enter exponential number:");
    scanf("%d",&x);
    result=exponent(a,x);
    printf("The answer is :%d",result);
    return 0;

}
int exponent(int a, int x){
    int result=1;
    for(int i=0;i<x;i++){
        result=result*a ;    
    }
    return result;
}


//program to convert lowercase charater to uppercase charater in a function.
#include<stdio.h>
#include <stdio.h>

char upper(char ch);

int main() {
    char ch, result;

    printf("Enter a lowercase character: ");
    scanf(" %c", &ch);

    result = upper(ch);
    printf("Uppercase character: %c\n", result);
    return 0;
}

char upper(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - 32;
    }
    return ch;
}


