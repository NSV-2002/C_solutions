#include<stdio.h>
void main()
{
   int num;
   printf("Enter a number :");
   scanf("%d",&num);
   num<0?printf("number is negative"):printf("number is positive");
}