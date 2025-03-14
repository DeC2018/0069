#include <iostream>

class Solution {
public:
    int mySqrt(int x) {
        long long int left = 1;
        long long int right = x;
        while(left <= right)
        {
            long long int mid = left + (right - left)/2;
            if(mid*mid > x)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return right;
    }
};

int main() {
    Solution solution;
    int x1 = 4;
    int x2 = 8;

    std::cout << "Input: x = " << x1 << std::endl;
    std::cout << "Output: " << solution.mySqrt(x1) << std::endl;

    std::cout << "Input: x = " << x2 << std::endl;
    std::cout << "Output: " << solution.mySqrt(x2) << std::endl;

    return 0;
}
