#include<stdio.h>
 int main ( ) 
 {
     float x,tax;
     printf("Enter the income slab");
     scanf("%f",&x);
     if(x<=400000)
     tax=0.00;
     else if(x<=800000)
     tax=(x-400000)*0.05;
     else if(x<=1200000)
     tax=20000+(x-800000)*0.10;
     else
     tax=60000+(x-1200000)*0.15;
     printf(" The total income tax is %2f",tax);
     return 0;
 }