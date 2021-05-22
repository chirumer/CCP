// to display ASCII value of a character

#include <stdio.h>

int main() {

    printf("Enter a character: ");
    char input;
    scanf("%c", &input);

    int ascii_value = input;
    printf("ASCII value of the character: %d\n", input);

    return 0;
}
