#include<stdio.h>
void main()
{
  int N,opt;
  printf("Enter the value of N :");
  scanf("%d",&N);
    printf("select the option to perform a operation.\n");
    printf("1. Find the sum of first N numbers\n2. Find the sum of first and last digit of number N\noption :");
    scanf("%d",&opt);
    if(opt==1)
    {
        int sum=0;
        for(int i=1;i<N;i++)
        {
            sum =sum+i;
        }
        printf("The sum of first N numbers is :%d",sum);
    }
    else if (opt==2)
    {
        int sum;
        int first=N,last;
           
        while (first>=10)
        {
           first=first/10;
        }
        last=N%10;
        sum=first+last;
        printf("the sum of first and last digit is :%d",sum);
    }
    else 
    {
    printf("please select correct option!!");
    }
  }
