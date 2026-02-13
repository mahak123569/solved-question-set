#include <stdio.h>

int main() {
    long long result = 0;
    long long min_val = -2147483648; // -2^31
    long long max_val = 2147483647;  // 2^31-1

    for (long long x = min_val; x <= max_val; x++) {
        for (long long y = min_val; y <= max_val; y++) {
            for (long long z = min_val; z <= max_val; z++) {
                result += (x + y + z);
            }
        }
    }

    printf("Result: %lld\n", result);
    return 0;
}