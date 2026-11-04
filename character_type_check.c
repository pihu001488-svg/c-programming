#include<stdio.h>
 int main ( ) 
 {
    char ch;
    printf("Enter the character");
    scanf("%c", &ch);
    if(ch>='A' && ch<='Z')
    printf("This is uppercase");
    else if(ch>='a' && ch<='z')
    printf("This is lowercase");
    else if(ch>='0' && ch<='9')
    printf("This is digit");
    else
    printf(" It is a special character");
     return 0;
 }
 