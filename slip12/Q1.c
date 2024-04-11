#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Numbers from 1 to %d in reverse order:\n", n);
    for (int i = n; i >= 1; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}
