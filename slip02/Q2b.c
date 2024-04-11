#include<stdio.h>
void main()
{
    int num,binary[32],i=0,j;
    printf("Enter a decimal number :");
    scanf("%d",&num);
    while (num>0)
   {
    binary[i] = num%2;
    num = num/2;
   i++;
   }
   printf("binary equivalent:");
   for ( j =i-1; j >=0 ; j--)
   {
    printf("%d",binary[j]);
   }
   printf("\n");
}