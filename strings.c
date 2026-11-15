/*
find string length
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("enter a string :");
    scanf("%99s",str);
    printf("length=%zu",strlen(str));
    return 0;
}
    
// copy one string into another
#include<stdio.h> 
#include<string.h>
int main(){
    char a[100],b[100];
    printf("enter a string:");
    scanf("%99s",a);
    strcpy(b,a);
    printf("copied string = %s",b);
    return 0 ;

}  
    
//concatenate two string
#include<stdio.h>
#include<string.h>
int main(){
    char a[100] = "hello";
    char b[100] = "world";
    strcat(a,b);
    printf("%s",a);
    return 0 ;
} 
    
//compare two strings
#include<stdio.h>
#include<string.h>
int main(){
    char a[50],b[50];
    printf("enter first string:");
    scanf("%49s",a);
    printf("enter second string:");
    scanf("%49s",b);
    if(strcmp(a,b)==0){
        printf("strings are equal");
    }else{
        printf("strings are not equal");
    }
    return 0;

} 
    */
//reverse a string
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,len;
    printf("Enter a string:");
    scanf("%99s",str);
    len=strlen(str);
    printf("reverse = ");
    for(i=len-1;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0 ;

}

    



