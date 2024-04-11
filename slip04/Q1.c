#include<stdio.h>
void main()
{
    char chr;
    printf("Enter the charecter : ");
    scanf("%c",&chr);

    if ((int)chr > 64 && (int)chr < 90 )
    printf("%c is upper case",chr);

    else if ((int)chr > 96 && (int)chr < 122)
    printf("%c is lower case ",chr);
    
    else
    printf("it is not a english alphabet");
    
}