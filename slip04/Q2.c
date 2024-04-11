#include<stdio.h>
void main()
{
 int j,i,n; 
 char matrix[50][50];
 char square[50][50];
 printf("Enter the size of matrix :");
 scanf("%d",&n);
 printf("Enter the elements of matrix :");
 for ( i = 0; i < n; i++)
 {
    for ( j = 0; j < n; j++)
    {
        scanf("%d",&matrix[i][j]);
    }
 }
 for ( i = 0; i < n; i++)
 {
    for ( j = 0; j < n; j++)
    {
        printf("%d ",matrix[i][j]);
    }
    printf("\n");
 }
 printf("the square of elements of matix : \n");
 for ( i = 0; i < n; i++)
 {
    for ( j = 0; j < n; j++)
    {
        square[i][j] = matrix[i][j] * matrix[i][j];
        printf("%d \t",square[i][j]);
    }
    printf("\n");
    
 }
}