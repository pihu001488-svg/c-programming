#include<stdio.h>
 int main ( ) 
 {
   char character;
    printf(" Enter the character");
    scanf("%c" , &character);
    switch(character)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    printf(" This is a vowel");
    break;
    default:
    printf(" It is a consonant");
    }
        return 0;
 }
 