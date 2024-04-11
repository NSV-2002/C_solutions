#include<stdio.h>
void main()
{
    char c ='A';
    int i ,j,n=5;
    for ( i = 0; i < n; i++)
    {
        for ( j = i;j<n;j++)
        {
            printf("%c",c);
            c++;
        }
        c='A';
        printf("\n");
    }
    
}