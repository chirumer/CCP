// to convert character to its lower case

#include <stdio.h>

int main() {

    printf("Enter a character: ");
    char input;
    scanf("%c", &input);

    char lwr_input = (
	input >= 'A' && input <= 'Z' ?
	    input + ('a' - 'A') :
	    input
    );	    
    printf("The character in lowercase: %c", lwr_input);

    return 0;
}
