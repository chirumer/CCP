// finds smallest of three numbers

#include <stdio.h>

int main() {

    printf("Enter three numbers: ");
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    int smallest = num1 < num2 ? num1 : num2;
    smallest = num3 < smallest ? num3 : smallest;

    printf("The smallest of the three numbers: %d\n", smallest);

    return 0;
}
