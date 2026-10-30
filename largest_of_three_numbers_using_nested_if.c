#include<stdio.h>
 int main ( ) 
 {
     int b,c,e;
     printf("Enter the number");
     scanf("%d %d %d", &b , &c , &e);
     if(b>c)
     {
         if(b>e)
         printf(" b is largest number");
         else
         printf(" e is largest number");
     }
     else
     {
         if(c>e)
         printf(" c is largest number");
         else
         printf(" e is largest number");
     }
     return 0;
 }