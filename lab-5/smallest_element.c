#include <stdio.h>

const int MAX_SIZE = 100;

int main() {

    printf("Enter number of elements in array: ");
    int size;
    scanf("%d", &size);

    printf("Enter elements of array: ");
    int num_arr[MAX_SIZE];
    for (int i = 0; i < size; ++i) {
	scanf("%d", &num_arr[i]);
    }

    int smallest_indx = 0, smallest = num_arr[0];
    for (int i = 1; i < size; ++i) {
	if (num_arr[i] < smallest) {
	    smallest = num_arr[i];
	    smallest_indx = i;
	}
    }

    printf(
	"Smallest element %d found at %d position.\n",
	smallest,
       	smallest_indx
    );

    return 0;
}
