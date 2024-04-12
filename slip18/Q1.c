#include<stdio.h>
void main()
{
    int n;
    printf("\n Enter a number");
    scanf("%d",&n);
    if(n%5==0 && n%7==0)
    {
        printf("\n %d is divisible by 5 and 7",n);
    }
    else
    printf("\n %d id not divisible by 5 & 7 ",n);
}