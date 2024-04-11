#include <stdio.h>
int main()
{
    int decimal, quotient;
    int octal[100], i = 1, j;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    quotient = decimal;
    while (quotient != 0)
    {
        octal[i++] = quotient % 8;
        quotient = quotient / 8;
    }
    printf("Equivalent octal value of decimal number %d: ", decimal);
    for (j = i - 1; j > 0; j--)
    {
        printf("%d", octal[j]);
    }
    printf("\n");
    return 0;
}
