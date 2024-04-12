#include<stdio.h>
void main()
{
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    printf("the first 10 multiple of %d are :",n);
    for (int i = 0; i <= 10; i++)
    {
       printf("%d\n",n*i);
    }
    
}