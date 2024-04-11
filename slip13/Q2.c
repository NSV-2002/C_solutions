#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter the number of rows (m) and columns (n) of the matrix A: ");
    scanf("%d %d", &m, &n);
    int A[m][n];
    printf("Enter the elements of the matrix A:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Sum of elements of each row:\n");
    for (int i = 0; i < m; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < n; j++)
        {
            rowSum += A[i][j];
        }
        printf("Row %d: %d\n", i + 1, rowSum);
    }
    return 0;
}
