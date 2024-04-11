#include <stdio.h>
int main()
{
    char ch;
    int alphabetCount = 0, digitCount = 0;
    printf("Enter characters (type \" to stop):\n");
    while (1)
    {
        scanf(" %c", &ch);

        if (ch == '"')
        {
            break;
        }

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            alphabetCount++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            digitCount++;
        }
    }
    printf("Total alphabets: %d\n", alphabetCount);
    printf("Total digits: %d\n", digitCount);
    return 0;
}
