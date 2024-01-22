#include <stdio.h>
#include <stdlib.h> // for malloc

int main()
{
    // Get the dimensions of the matrices from the user
    int m, n, p, q;
    printf("Enter the dimensions of the first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter the dimensions of the second matrix: ");
    scanf("%d %d", &p, &q);

    // Check that the matrices are compatible for multiplication
    if (n != p) {
        printf("Error: The matrices are not compatible for multiplication.\n");
        return 1;
    }

    // Allocate memory for the matrices
    int **A = malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++) {
        A[i] = malloc(n * sizeof(int));
    }
    int **B = malloc(p * sizeof(int *));
    for (int i = 0; i < p; i++) {
        B[i] = malloc(q * sizeof(int));
    }
    int **C = malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++) {
        C[i] = malloc(q * sizeof(int));
    }

    // Get the elements of the first matrix from the user
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Get the elements of the second matrix from the user
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Calculate the product of the matrices
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print the result matrix
    printf("Result:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    // Free the memory
    for (int i = 0; i < m; i++) {
        free(A[i]);
    }
    free(A);
    for (int i = 0; i < p; i++) {
        free(B[i]);
    }
    free(B);
}