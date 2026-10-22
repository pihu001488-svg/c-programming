#include<stdio.h>
 int main ( ) 
 {
     float radius;
     float area;
     const float PI=3.14159;
     printf("Enter radius",radius);
     scanf("%f" ,&radius);
     area=PI*radius*radius;
     printf(" Area of circle%f",area);
     return 0;
 }