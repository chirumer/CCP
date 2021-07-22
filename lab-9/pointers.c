// perform arithmetic operations with help of pointers

#include <stdio.h>
    // printf(), scanf()
#include <stdlib.h>
    // EXIT_SUCCESS

void display(int* ptr_a, int* ptr_b) {

    printf("a+b: %d\n", (*ptr_a)+(*ptr_b));
    printf("a-b: %d\n", (*ptr_a)-(*ptr_b));
    printf("a*b: %d\n", (*ptr_a)*(*ptr_b));
    printf("a/b: %d\n", (*ptr_a)/(*ptr_b));
    printf("a%%b: %d\n", (*ptr_a)%(*ptr_b));
}

int main() {

    int a, b;
    printf("Enter two numbers a and b: ");
    scanf("%d %d", &a, &b);

    display(&a, &b);

    return EXIT_SUCCESS;
}
