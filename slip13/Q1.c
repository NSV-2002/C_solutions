#include <stdio.h>
int main()
{
    int X, Y;
    printf("Enter the value of X: ");
    scanf("%d", &X);
    printf("Enter the value of Y: ");
    scanf("%d", &Y);
    int integerDivision = X / Y;
    int exactDivision = X % Y;
    int remainder = X - (integerDivision * Y);
    printf("Integer division of X by Y: %d\n", integerDivision);
    printf("Exact division of X by Y: %d\n", exactDivision);
    printf("Remainder of X divided by Y: %d\n", remainder);
    return 0;
}
