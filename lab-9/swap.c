// swap to variables (make use of pointers as well)

#include <stdio.h>
    // printf(), scanf()
#include <stdlib.h>
    // EXIT_SUCCESS

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {

    int a, b;
    printf("Enter two numbers a and b: ");
    scanf("%d %d", &a, &b);

    swap(&a, &b);

    printf("a and b after swapping: %d %d\n", a, b);

    return EXIT_SUCCESS;
}
