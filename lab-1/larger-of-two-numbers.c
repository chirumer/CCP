// input1 greater or input2

#include <stdio.h> // printf(), scanf()

int main() {

    printf("Enter two numbers: ");
    int input1, input2;
    scanf("%d %d", &input1, &input2);

    printf("%d is larger", input1 > input2 ? input1 : input2);
    return 0;
}