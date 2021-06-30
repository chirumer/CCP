// insert an element into an ascending list of elements

#include <stdio.h>
    // printf(), scanf(), fprintf()
#include <stdlib.h>
    // EXIT_SUCCESS, EXIT_FAILURE
#include <stdbool.h>
    // bool, true, false

const int MAX_SIZE = 100;

bool is_sorted(int nums[], int size, bool is_asc);
    // checks if nums is sorted
    // --> is_asc if ascending

void insert_sorted(int nums[], int size, int insert_ele,
        bool is_asc);
    // inserts element to sorted array
    // --> is_asc if ascending

int main() {

    // input
    printf("Number of elements in array: ");
    int size;
    scanf("%d", &size);

    // input
    printf("Enter the elements: ");
    int input_nums[MAX_SIZE];
    for (int i = 0; i < size; ++i) {
        scanf("%d", &input_nums[i]);
    }

    // sanity check
    if (!is_sorted(input_nums, size, true)) {
        fprintf(stderr, "input not sorted\n");
        return EXIT_FAILURE;
    }

    // input
    printf("Enter the insertion element: ");
    int insert_ele;
    scanf("%d", &insert_ele);

    printf("Before insertion:");
    for (int i = 0; i < size; ++i) {
        printf(" %d", input_nums[i]);
    }
    printf("\n");

    // insert
    insert_sorted(input_nums, size, insert_ele, true);
    ++size;

    printf("After insertion:");
    for (int i = 0; i < size; ++i) {
        printf(" %d", input_nums[i]);
    }
    printf("\n");

    return EXIT_SUCCESS;
}

bool is_sorted(int nums[], int size, bool is_asc) {

    for (int i = 1; i < size; ++i) {
        if (is_asc && nums[i] < nums[i-1]) {
            return false;
        }
        else if (!is_asc && nums[i] > nums[i-1]) {
            return false;
        }
    }
    return true;
}

void insert_sorted(int nums[], int size, int insert_ele,
        bool is_asc) {

    ++size;

    if (is_asc) {

        int i;
        for (i = size-2; i >= 0 && insert_ele < nums[i]; --i) {
            nums[i+1] = nums[i];
        }
        nums[i+1] = insert_ele;
    }
    else {
        int i;
        for (i = size-2; i >= 0 && insert_ele > nums[i]; --i) {
            nums[i+1] = nums[i];
        }
    }
}
