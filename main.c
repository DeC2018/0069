#include <stdio.h>

int mySqrt(int x) {
    if (x == 0 || x == 1) return x; // Base case
    int left = 1, right = x, ans = 0;
    while (left <= right) {
        long mid = left + (right - left) / 2;  // Avoid overflow
        long square = mid * mid;
        if (square == x) return mid;
        if (square < x) {
            ans = mid;  // Store possible answer
            left = mid + 1;  // Search in right half
        } else {
            right = mid - 1; // Search in left half
        }
    }
    return ans;
}

int main() {
    int x1 = 4;
    printf("Input: x = %d\nOutput: %d\n", x1, mySqrt(x1));

    int x2 = 8;
    printf("Input: x = %d\nOutput: %d\n", x2, mySqrt(x2));

    return 0;
}
