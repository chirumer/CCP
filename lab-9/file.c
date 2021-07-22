#include <stdio.h>

int main() {

    char user_data[100], file_data[100];
    FILE* reading;
    FILE* writing;

    printf("Enter some data: ");
    fgets(user_data, 100, stdin);

    writing = fopen("bmsce.txt", "w");
    fputs(user_data, writing);
    fclose(writing);

    reading = fopen("bmsce.txt", "r");
    fgets(file_data, 100, reading);
    fclose(reading);

    printf("Data read: %s\n", file_data);

    return 0;
}
