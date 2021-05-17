#include<stdio.h>

int main() {

    printf("Enter temperature value  (in Fahrenheit): ");
    int fahrenheit;
    scanf("%d", &fahrenheit);

    int celsius = (5.0/9.0)*(fahrenheit-32);

    printf("temperature in Fahrenheit: %d", fahrenheit);
    printf("\ntemperature in Celsius: %d\n", celsius);

    return 0;
}
