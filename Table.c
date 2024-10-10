#include <stdio.h>

int main() {
    int t;

    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &t);

    // Loop from 1 to 10 to print the multiplication table
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", t, i, t * i);
    }

    return 0;
}
