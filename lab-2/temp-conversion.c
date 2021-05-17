#include<stdio.h>

int main() {

    printf("Enter temperature value  (in Fahrenheit): ");
    double fahrenheit;
    scanf("%lf", &fahrenheit);

    double celsius = (5.0/9.0)*(fahrenheit-32);

    printf("temperature in Fahrenheit: %lf", fahrenheit);
    printf("\ntemperature in Celsius: %lf\n", celsius);

    return 0;
}
