// find quadratic roots

#include <stdio.h>
#include <math.h>

int main() {

    printf("ax^2 + bx + c = 0; Enter a,b,c: ");
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double discriminant = b*b - 4*a*c;
    if (discriminant < 0) { // roots are imaginary
	discriminant *= -1;

	double x = -b/(2*a);
	double y = sqrt(discriminant)/(2*a);

	printf(
	    "Root1: %lf + (%lf)i",
	    x,
	    y
	);
	printf(
	    "\nRoot2: %lf + (%lf)i\n",
	    x,
	    y
	);
	return 0;
    }
    double x = -b/(2*a);
    double y = sqrt(discriminant)/(2*a);

    printf(
	"Root1: %lf",
	x+y
    );
    printf(
	"\nRoot2: %lf",
	x-y
    );

    return 0;
}
