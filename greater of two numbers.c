#include<stdio.h>
 int main ( ) 
 {
     int x,y;
     printf("enter number",x);
     scanf("%d",&x);
     printf("enter number",y);
     scanf("%d",&y);
     if(x>y)
     printf("%dGreater",x);
     else if(x<y)
     printf("%dGreater",y);
     else
     printf("Both are equal");
     return 0;
 }