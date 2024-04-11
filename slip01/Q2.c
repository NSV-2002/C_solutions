#include<stdio.h>
void main()
{
    char martrix[50][50];
    char trans[50][50];
    int r,c,j,i;
    printf("Enter the number of rows : \n");
    scanf("%d",&r);
    printf("Enter number of columns :");
    scanf("%d",&c);   
    printf("enter the elements :\n");
    for(i=0;i<r;i++)
    {
        for ( j = 0; j < c; j++)
        {
            scanf("%d",&martrix[i][j]);
        }   
    }
   printf("the matrix is :\n");
    for(i=0;i<r;i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("%d ",martrix[i][j]);
        }
        printf("\n");   
    }
   printf("transpose of the matrix is:\n");
   for ( i = 0; i < r; i++)
   {
      for ( j = 0; j < c; j++)
      {
        trans[i][j] = martrix[j][i]; 
      }
   }
   for ( i = 0; i < r; i++)
   {
     for ( j = 0; j< c; j++)
     {
        printf("%d ",trans[i][j]);
     }
     printf("\n");
   } 
}