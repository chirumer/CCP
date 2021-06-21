// sum of squares of first N odd numbers

#include <stdio.h>
    // printf(), scanf()

int main() {

    printf("Enter a number: ");
    int N;
    scanf("%d", &N);

    int output = 0;
    printf("Sum of:");
    
    // 2n-1 for [1, N] gives first N odd numbers
    // sum the square of (2n-1)
    for (int i = 1; i <= N; ++i) {

        int num = 2*i - 1;
        printf(" %d^2", num);
        output += num*num;
    }

    printf("\nis: %d\n", output);

    return 0;
}
