#include<stdio.h>
 int main ( ) 
 {
     char x;
     printf("Enter character");
     scanf("%c",&x);
     if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
     printf("vowel");
     else if(x=='A' || x=='E' || x=='I'|| x=='O' || x=='U')
     printf("vowel");
     else
     printf("consonent");
     return 0;
 }