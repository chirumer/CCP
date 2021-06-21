// swap the largest and smallest element in array

#include <stdio.h>

const int MAX_SIZE = 100;

int main() {

    printf("Number of elements: ");
    int size;
    scanf("%d", &size);

    if (size < 1) { return 0; }

    printf("Enter the elements: ");
    int elements[MAX_SIZE];
    for (int i = 0; i < size; ++i) {
        scanf("%d", &elements[i]);
    }
    int smallest_indx = 0, 
        largest_indx = 0, 
        smallest = elements[0], 
        largest = elements[0]; 

    // find largest and smallest 
    for (int i = 1; i < size; ++i) {

        int element = elements[i];

        if (element < smallest) {
            smallest = element;
            smallest_indx = i;
        }
        else if (element > largest) {
            largest = element;
            largest_indx = i;
        }
    }

    // swap largest and smallest
    int temp = elements[largest_indx];
    elements[largest_indx] = elements[smallest_indx];
    elements[smallest_indx] = temp;

    printf(
        "\nElements after swapping largest and smallest:"
    );
    for (int i = 0; i < size; ++i) {
        printf(" %d", elements[i]);
    }
    printf("\n");

    return 0;
}
