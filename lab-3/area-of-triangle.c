// to find area of triangle given three sides

#include <stdio.h> 
// printf(), scanf()
#include <math.h>
// sqrt()

int main() {

    printf("Enter the sides (length) of the triangle: ");
    double side1, side2, side3;
    scanf("%lf %lf %lf", &side1, &side2, &side3);

    double semi_perimeter = (side1+side2+side3)/2;

    double area = sqrt( 
	semi_perimeter *
	(semi_perimeter-side1) *
	(semi_perimeter-side2) *
	(semi_perimeter-side3)
    );
    printf("Area of the triangle: %lf\n", area);

    return 0;
}
