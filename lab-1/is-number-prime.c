// checks if input is prime

#include <stdio.h> // printf(), scanf()
#include <math.h> // sqrt()
#include <stdbool.h> // bool

bool is_prime(int input);

int main() {

    printf("Enter a number: ");
    int input;
    scanf("%d", &input);

    printf(is_prime(input) ? "Prime" : "Not Prime");
    return 0;
}

bool is_prime(int input) {
    if (input < 2 || input % 2 == 0) { return false; }
    for (int i = 3; i <= sqrt(input); ++i) {
        if (input % i == 0) { return false; }
    }
    return true;
}
