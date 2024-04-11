#include<stdio.h>
void main()
{
    int week;
    printf("input the day of week (1-7) :");
    scanf("%d",&week);
    switch (week)
    {
    case 1:
        printf("it is monday!!");
        break;
    case 2:
        printf("it is tuesday!!");
        break;
    case 3:
        printf("it is wednesday!!");
        break;
    case 4:
        printf("it is thusrday!!");
        break;
    case 5:
        printf("it is friday!!");
        break;
    case 6:
        printf("it is saturday!!");
        break;
    case 7:
        printf("it is sunday!!");
        break;
    default:
    printf("please enter correct input !!");
        break;
    }
}