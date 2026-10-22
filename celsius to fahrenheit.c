#include<stdio.h>
 int main ( ) 
 {
     float F,C;
     printf("Enter temperature in celsius");
     scanf("%f",&C);
     F=1.8*C+32;
     printf(" The temperature in fahreinheit is %f",F);
     return 0;
 }