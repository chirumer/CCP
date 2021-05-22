// to display last digit of a number

#include <stdio.h>

int main() {

    printf("Enter a number: ");
    int input;
    scanf("%d", &input);

    int last_digit = input % 10;
    printf("The last digit of the number: %d\n", last_digit);

    return 0;
}
