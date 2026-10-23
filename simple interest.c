#include<stdio.h>
 int main ( ) 
 {
     float p,r,t;
     float SI;
     printf("Enter number");
     scanf("%f %f %f",&p,&r,&t);
     SI=p*r*t/100;
     printf(" The value is %f",SI);
     return 0;
 }