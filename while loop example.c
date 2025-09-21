#include <stdio.h>

// Function to find the minimum non-zero value in an array
int findMin(int arr[], int n) {
    int min = 1000; // Assume stick lengths are less than 1000
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// Main logic for cutTheSticks
void cutTheSticks(int arr[], int n) {
    int remaining = n;

    while (1) {
        int count = 0;
        int min = findMin(arr, n);

        // If no min found (all are zero), stop
        if (min == 1000) {
            break;
        }

        // Cut sticks and count how many are cut
        for (int i = 0; i < n; i++) {
            if (arr[i] > 0) {
                arr[i] -= min;
                count++;
            }
        }

        // Print number of sticks cut in this round
        printf("%d\n", count);
    }
}

// Driver code
int main() {
    int n;
    scanf("%d", &n); // Read number of sticks

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read stick lengths
    }

    cutTheSticks(arr, n);

    return 0;
}
