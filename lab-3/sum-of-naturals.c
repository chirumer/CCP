// find sum of first N naturals

#include <stdio.h>

int sum_naturals(int x);
// finds sum of first 'x' naturals

int main() {

    printf("Enter a number: ");
    int input;
    scanf("%d", &input);

    int sum = sum_naturals(input);
    printf("Sum of first %d naturals: %d\n", input, sum);

    return 0;
}

int sum_naturals(int x) {
    int sum = 0;
    for (int i = 1; i <= x; ++i) { sum += i; }
    return sum;
}
