// print multiples of n in 1 to 100

#include <stdio.h>

int main() {

    printf("Enter a number: ");
    int input;
    scanf("%d", &input);

    for (int i = 1; i <= 100; ++i) {
	if (i % input == 0) {
	    printf("%d divides  %d\n", input, i);
	}
    }

    return 0;
}
