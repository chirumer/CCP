#include <stdio.h>
// printf(), scanf()

int main() {

    printf("Enter two numbers: ");
    int M, N;
    scanf("%d %d", &M, &N);

    printf("Even numbers in [%d, %d]:", M, N);
    for (int i = M%2==0 ? M : M+1; i <= N; i+=2) {
	printf(" %d", i);
    }

    return 0;
}
