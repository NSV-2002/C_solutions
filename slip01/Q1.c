#include<stdio.h>
void main()
{
    char c;
    printf("\n Enter a character :");
    scanf("%c",&c);
    if(c == 'a'||c=='e'||c=='i'||c=='o'||c=='u'||
    c == 'A'||c=='E'||c=='I'||c=='O'||c=='U')
    printf("\n %c is a vowel",c);
    else
    printf("%c is consonant",c);
}