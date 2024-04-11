#include<stdio.h>
void main()
{
    int i,x ,n;
    int sum=0,unit;
    printf("Enter the value of x :");
    scanf("%d",&x);
    printf("Enter the value of n :");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        unit = (x-i);
        sum = sum + unit;
    }
    printf("%d is the result of the series",sum);
}