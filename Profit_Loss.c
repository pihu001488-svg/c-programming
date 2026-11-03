#include<stdio.h>
 int main ( ) 
 {
    float SP;
    float CP;
    printf("Enter the price");
    scanf("%f %f",&SP, &CP);
    if(SP>CP)
    {
    printf("The profit is %f", SP-CP);
    printf("\nThe profit percentage is %f",(SP-CP)/CP*100);
    }
    else if(CP>SP)
    {
    printf("The loss is %f",SP-CP);
    printf("\nThe loss percentage is %f",(SP-CP)/CP*100);
    }
    else
    {
    printf("There is no lost and profit");
    }
     return 0;
 }
 