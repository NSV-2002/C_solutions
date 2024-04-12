#include <stdio.h>
long long power(int x, int y) {
    if (y == 0) {
        return 1;
    } else if (y > 0) {
        return x * power(x, y - 1);
    } else {
        return 1.0 / (x * power(x, -y - 1));
    }
}
int main() {
    int x, y;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    printf("%d^%d = %lld\n", x, y, power(x, y));
    return 0;
}

