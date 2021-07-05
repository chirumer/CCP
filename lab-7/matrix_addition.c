#include <stdio.h>
    // printf(), scanf()

const int MAX_SIZE = 100;

int main() {

    printf("Enter order of the matrices: ");
    int no_rows, no_cols;
    scanf("%d %d", &no_rows, &no_cols);

    printf("Enter elements of first matrix: ");
    int matrix_1[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < no_rows; ++i) {
        for (int j = 0; j < no_cols; ++j) {
            scanf("%d", &matrix_1[i][j]);
        }
    }

    printf("Enter elements of second matrix: ");
    int matrix_2[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < no_rows; ++i) {
        for (int j = 0; j < no_cols; ++j) {
            scanf("%d", &matrix_2[i][j]);
        }
    }

    // find sum
    int sum_matrix[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < no_rows; ++i) {
        for (int j = 0; j < no_cols; ++j) {
            sum_matrix[i][j] = matrix_1[i][j] + matrix_2[i][j];
        }
    }

    printf("\nSum of the two matrices:\n");
    for (int i = 0; i < no_rows; ++i) {
        for (int j = 0; j < no_cols; ++j) {
            printf("%d ", sum_matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
