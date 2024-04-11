#include<stdio.h>
void main()
{
    int i,num[4],avrg;
    for ( i = 0; i < 4; i++)
    {
        printf("Enter the value of number %d:",i+1);
        scanf("%d",&num[i]);
    }
    printf("the averge of numbers :");
    int sum=0;
    for ( i = 0 ; i < 4; i++)
    {
      sum = sum + num[i];
    }  
    printf("%d",sum/4);
}