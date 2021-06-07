// print multiples of n in 1 to 100

#include <stdio.h>

int main() {

    printf("Enter a number: ");
    int input;
    scanf("%d", &input);

    for (int i = input; i <= 100; i+=input) {
	printf("%d divides  %d\n", input, i);
    }

    return 0;
}
