// to display second last digit of a number

#include <stdio.h>

int main() {

    printf("Enter a number: ");
    int input;
    scanf("%d", &input);

    int scnd_lst_dgt = input/10 % 10;
    printf("Second last digit of number: %d\n",
	    scnd_lst_dgt);

    return 0;
}
