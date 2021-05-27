// convert hours and minutes to minutes (using functions)

#include <stdio.h>

int get_total_minutes(int hours, int minutes) {
    return hours*60 + minutes;
}

int main() {

    printf("Enter hours and minutes in format hours:minutes: ");
    int hours, minutes;
    scanf("%d:%d", &hours, &minutes);

    int total_minutes = get_total_minutes(hours, minutes); 
    printf("Total minutes: %d\n", total_minutes);

    return 0;
}
