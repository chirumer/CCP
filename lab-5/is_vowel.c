#include <stdio.h>
// printf(), scanf()
#include <stdbool.h>
// bool

bool is_vowel(char x);
// checks if x is a vowel

int main() {

    printf("Enter a character: ");
    char input;
    scanf("%c", &input);

    printf(
	is_vowel(input) ?
		"The entered character is a vowel\n"
		:
		"The entered character is consonant\n"
    );

    return 0;
}


bool is_vowel(char x) {

    switch(x) {

	case 'a': case 'e': 
	case 'i': case 'o':
	case 'u':

	    return true;

	default:

	    return false;
    }
}
