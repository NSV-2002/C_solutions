#include <stdio.h>

int main()
{
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    
    printf("ASCII values of vowels:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("'%c' -> %d\n", vowels[i], vowels[i]);
    }

    return 0;
}
