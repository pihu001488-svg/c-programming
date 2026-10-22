#include<stdio.h>
 int main ( ) 
 {
     int x;
     printf("enter number",x);
     scanf("%d",&x);
     if(x%4==0)
     printf("It is leap year%d",x);
     else
     printf("It is not a leap year");
     return 0;
 }