#include <stdio.h>

int main() {
    int a[10][10], lower[10][10];
    int i, j, n;

    printf("Enter the size of square matrix (n): ");
    scanf("%d", &n);

    printf("Enter the elements of %d x %d matrix:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i >= j)
                lower[i][j] = a[i][j];  
            else
                lower[i][j] = 0;       
        }
    }

    printf("\nLower Triangular Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", lower[i][j]);
        }
        printf("\n");
    }

    return 0;
}

