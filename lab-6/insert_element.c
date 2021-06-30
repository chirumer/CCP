// insert element into array at given position

#include <stdio.h>

const int MAX_SIZE = 100;

int main() {

    // get input
    printf("Number of elements in array: ");
    int size;
    scanf("%d", &size);

    // get input
    printf("Enter elements: ");
    int input_nums[MAX_SIZE];
    for (int i = 0; i < size; ++i) {
        scanf("%d", &input_nums[i]);
    }

    // get input
    printf("Enter the insertion element: ");
    int insert_ele;
    scanf("%d", &insert_ele);

    // get input
    printf("Enter 0-indexed insertion position: ");
    int insert_pos;
    scanf("%d", &insert_pos);

    printf("Before insertion:");
    for (int i = 0; i < size; ++i) {
        printf(" %d", input_nums[i]);
    }
    printf("\n");

    // insert the element
    size += 1;
    for (int i = size-2; i >= insert_pos; --i) {
        // shift all elements >= insert_pos
        input_nums[i+1] = input_nums[i];
    }
    input_nums[insert_pos] = insert_ele;

    printf("After insertion:");
    for (int i = 0; i < size; ++i) {
        printf(" %d", input_nums[i]);
    }

    return 0;
}
