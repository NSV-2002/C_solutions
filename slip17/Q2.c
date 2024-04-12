#include <stdio.h>
#define PI 3.14159265359
int main() {
    int choice;
    float radius, side, area;
    do {
        printf("\nMenu:\n");
        printf("1. Area of Circle\n");
        printf("2. Area of Square\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter the radius of the circle: ");
                scanf("%f", &radius);
                area = PI * radius * radius;
                printf("Area of the circle: %.2f\n", area);
                break;
            case 2:
                printf("Enter the side of the square: ");
                scanf("%f", &side);
                area = side * side;
                printf("Area of the square: %.2f\n", area);
                break;
            case 3:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while(choice != 3);
    return 0;
}
