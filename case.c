#include <stdio.h>

int main() {
    int a, b, choice;
    printf("Enter number a:\n"); 
    scanf("%d", &a);
    printf("Enter number b:\n");
    scanf("%d", &b);
    
    printf("Choose an operation (1: Add, 2: Subtract, 3: Multiply, 4: Divide): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Result: %d\n", a + b);
            break;
        case 2:
            printf("Result: %d\n", a - b);
            break;
        case 3:
            printf("Result: %d\n", a * b);
            break;
        case 4:
            if (b != 0) {
                printf("Result: %.2f\n", (float)a / b);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Invalid operation selected!\n");
            break;
    }

    return 0;
}
