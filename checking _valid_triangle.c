#include<stdio.h>
 int main ( ) 
 {
     int a,b,c;
     printf("Enter the number");
     scanf("%d %d %d" , &a , &b , &c);
     if(b+c>a && a+c>b && a+c>c && a>0 && b>0 && c>0)
     printf("It can form a valid triangle");
     else
     printf("It does not form a valid triangle");
     return 0;
 }
 