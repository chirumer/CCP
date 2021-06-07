// find sum of digits of number

#include <stdio.h>

int main() {

    printf("Enter a number: ");
    int input;
    scanf("%d", &input);

    int sum = 0;
    int temp = input;
    while (temp) {
	int digit = temp % 10;
	sum += digit;
	temp /= 10;
    }

    printf("The sum of its digits: %d\n", sum);

    return 0;
}
