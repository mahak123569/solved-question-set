#include <stdio.h>
#include <stdio.h>

void permutationEquation(int p[], int n) {
    int index[n + 1]; // To store the index of each value in p
    
    // Store the index of each number in p
    for (int i = 0; i < n; i++) {
        index[p[i]] = i + 1; // Store position of value p[i] (1-based index)
    }
    
    // Compute the result for each x from 1 to n
    for (int x = 1; x <= n; x++) {
        int y = index[index[x]]; // Find y such that p(p(y)) = x
        printf("%d\n", y);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int p[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }
    
    permutationEquation(p, n);
    
    return 0;
}
