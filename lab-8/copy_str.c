#include <stdio.h>
    // printf(), scanf(), gets_s()

const int MAX_SIZE = 100;

int str_length(char* x);
    // finds length of string
void copy_str(char* source, char* destination);
    // copies string from source to destination

int main() {

    printf("Enter a string (max length: %d): ", MAX_SIZE-1);
    char user_str[MAX_SIZE];
    //gets_s(user_str, MAX_SIZE);
    //gets(user_str);
    scanf("%s", user_str);

    int length = str_length(user_str);
    printf("Length of entered string: %d", length);

    char new_str[MAX_SIZE];
    copy_str(user_str, new_str);
    printf("\nContent of new string: %s\n", new_str);

    return 0;
}

int str_length(char* x) {

    int length = 0;
    while (*x != '\0') {
        ++length;
        ++x;
    }
    return length;
}

void copy_str(char* source, char* destination) {

    while (*source != '\0') {
        *destination = *source;
        ++source;
        ++destination;
    }
    *destination = '\0';
}
