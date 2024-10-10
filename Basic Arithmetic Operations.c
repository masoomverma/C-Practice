#include <stdio.h>

int main() {
    int s, a, b, add, sub, mul;
    float div;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nEnter your choice: ");
    scanf("%d", &s);

    switch(s) {
        case 1:
            add = a + b;
            printf("The Addition is %d.\n", add);
            break; 
        case 2:
            sub = a - b;
            printf("The Subtraction is %d.\n", sub);
            break; 
        case 3:
            mul = a * b;
            printf("The Multiplication is %d.\n", mul);
            break; 
        case 4:
            if (b != 0) {
                div = (float)a / b; 
                printf("The Division is %.2f.\n", div); 
            } else {
                printf("Error: Division by zero is not defined.\n");
            }
            break; 
        default:
            printf("Invalid Choice.\n");
            break; 
    }

    return 0; 
}
