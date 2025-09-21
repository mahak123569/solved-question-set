#include <stdio.h>

int main() {
    int rows = 3;
    int cols = 3;
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        

    // Base address of the array (address of the first element)
    int *baseAddress = &A[0][0];

    printf("Base Address: %p\n", baseAddress);

    // Size of each element (in bytes)
    int elementSize = sizeof(A[0][0]);

    // Accessing elements using row-major order formula
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            int *address = baseAddress + (i * cols + j);
            printf("Element at A[%d][%d] = %d, Address = %p\n", i, j, A[i][j], address);
        }
    }

    return 0;
}
