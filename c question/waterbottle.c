#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int numWaterBottles(int numBottles, int numExchange) {
    int totalDrank = numBottles;   // Step 1
    int emptyBottles = numBottles; // Step 2

    while(emptyBottles >= numExchange) {   // Step 3
        int newFull = emptyBottles / numExchange;   // Step 3.1
        totalDrank += newFull;                      // Step 3.2
        emptyBottles = emptyBottles % numExchange + newFull; // Step 3.3
    }

    return totalDrank;   // Step 4
}
int main() {
    int numBottles = 9;
    int numExchange = 3;
    int result = numWaterBottles(numBottles, numExchange);
    printf("Total bottles drunk: %d\n", result); // Output: 13
    return 0;
}
