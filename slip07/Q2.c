#include<stdio.h>

void copy(int arry1[], int arry2[], int n);

int main()
{
    int arry1[10], arry2[10];
    printf("Enter the elements of array: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arry1[i]);
    }

    printf("Elements of first array are: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d, ", arry1[i]);
    }

    copy(arry1, arry2, 10);

    printf("\nElements of second array after copying: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d, ", arry2[i]);
    }

    return 0;
}

void copy(int arry1[], int arry2[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arry2[i] = arry1[i];
    }
}
