#include<stdio.h>
void main()
{
 int j,i,n; 
 char matrix1[50][50];
 char matrix2[50][50];
 char multi[50][50];
 printf("Enter the size of matrix :");
 scanf("%d",&n);
 printf("Enter the elements of matrix 1 :");
 for ( i = 0; i < n; i++)
 {
    for ( j = 0; j < n; j++)
    {
        scanf("%d",&matrix1[i][j]);
    }
 }
 printf("Enter the elements of matrix 2 :");
 for ( i = 0; i < n; i++)
 {
    for ( j = 0; j < n; j++)
    {
        scanf("%d",&matrix2[i][j]);
    }
 }
 printf("the multipication of elements of matrix : \n");
 for ( i = 0; i < n; i++)
 {
    for ( j = 0; j < n; j++)
    {
        multi[i][j] = matrix1[i][j] * matrix2[i][j];
        printf("%d \t",multi[i][j]);
    }
    printf("\n");
    
 }
}