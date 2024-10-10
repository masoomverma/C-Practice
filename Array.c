#include <stdio.h>
int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int start = 0, end = size - 1;
    int temp;
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    while (start < end) {
        temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }
    printf("\nReversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
