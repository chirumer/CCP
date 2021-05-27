// find square of number using user-defined function

#include <stdio.h>

int square(int x) {
    return x*x;
}

int main() {

    printf("Enter a number: ");
    int input;
    scanf("%d", &input);

    int squared = square(input);
    printf("Square of the number: %d\n", squared);

    return 0;
}
