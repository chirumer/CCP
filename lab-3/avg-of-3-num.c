// find the average of three integers

#include <stdio.h>
// printf(), scanf()

double find_avg(int x1, int x2, int x3) {
    return ( (x1+x2+x3)/3.0 );
}

int main() {

    printf("Enter three integers: ");
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    double avg = find_avg(num1, num2, num3);
    printf("Average of the three numbers: %lf\n", avg);

    return 0;
}
