#include <stdio.h>

int main() {
    int a[10][10], t[10][10];
    int r, c, i, j;

    // Input size
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &r, &c);

    // Input elements
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Find transpose
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            t[j][i] = a[i][j];   // swap row and column
        }
    }

    // Print transpose
    printf("Transpose matrix is:\n");
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++) {
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}

