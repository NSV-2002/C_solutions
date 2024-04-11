#include<stdio.h>
void main()
{
    int num;
    char chr;
    printf("select the option to perform the operation :\n");
    printf("1.Convert it to uppercase :\n");
    printf("2. Convert it to lowercase :");
    scanf("%d",&num);
    if (num==1)
    {
      printf("Enter a character :");
      scanf(" %c",&chr);
       chr = (int)chr-32;
       printf("%c",chr);
    }
    else if (num==2)
    {
      printf("Enter a character :");
      scanf(" %c",&chr);
      chr = (int)chr+32;
      printf(" %c",chr);   
    }
}