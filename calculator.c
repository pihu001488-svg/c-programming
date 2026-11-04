#include<stdio.h>
 int main ( ) 
 {
    int x;
    int y;
    int calculator;
    printf("Enter the number");
    scanf("%d %d", &x , &y);
    printf("1-addition");
    printf("\n2-substraction");
    printf("\n3-multiplication");
    printf("\n4-division");
    printf("\n5-modulus \n");
    scanf("%d" , &calculator);
    switch(calculator)
    {
        case 1:
        printf("The sum is %d",x+y);
        break;
        case 2:
        printf(" The difference is %d", x-y);
        break;
        case 3:
        printf("The multiplication is %d", x*y);
        break;
        case 4:
        if(y!=0)
        printf(" The division is %d",x/y);
        else
        printf(" division by zero is not possible");
        break;
        case 5:
        if(y!=0)
        printf(" The remainder is %d", x%y);
        else
        printf(" modulus by zero is not possible");
        break;
       default:
       printf(" Invalid operator");
    }
        return 0;
 }