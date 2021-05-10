// multiply two floating values

#include <stdio.h> // printf(), scanf()

int main() {

    printf("Enter two floating values: ");
    double num1, num2;
    scanf("%lf %lf", &num1, &num2);

    printf("Their product is: %lf", num1*num2);
    return 0;
}