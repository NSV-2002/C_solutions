#include <stdio.h>
int main() {
    int numbers[5], squares[5];
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < 5; i++) {
        squares[i] = numbers[i] * numbers[i];
    }
    printf("Squares of the numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", squares[i]);
    }
    printf("\n");
    return 0;
}
