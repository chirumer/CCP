#include <stdio.h>
// printf(), scanf()

const int MAX_SIZE = 100;

int main() {

    printf("Number of elements in the array: ");
    int size;
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    int num_arr[MAX_SIZE];
    for (int i = 0; i < size; ++i) {
	scanf("%d", &num_arr[i]);
    }

    printf("Elements of the array are:");
    for (int i = 0; i < size; ++i) {
	printf(" %d", num_arr[i]);
    }
    printf("\n");

    return 0;
}
