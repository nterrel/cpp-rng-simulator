#include "rng/rng.hpp"
#include <cassert>
#include <vector>
#include <iostream>

int main() {
    rng::Generator g1(123), g2(123), g3(456);

    // Test: Same seed -> same first number
    assert(g1.uniform_int(0, 10) == g2.uniform_int(0, 10));

    // Test: Different seed -> likely different numbers
    int a = g1.uniform_int(0, 10);
    int b = g3.uniform_int(0, 10);
    assert(a >= 0 && a <= 10);
    assert(b >= 0 && b <= 10);

    // Test: Generate multiple random numbers
    std::vector<int> nums = g1.uniform_ints(5, 0, 10);
    assert(nums.size() == 5);
    for (int num : nums) {
        assert(num >= 0 && num <= 10);
    }

    // Test: Edge case (lo == hi)
    assert(g1.uniform_int(5, 5) == 5);
    std::vector<int> same_nums = g1.uniform_ints(3, 7, 7);
    for (int num : same_nums) {
        assert(num == 7);
    }

    std::cout << "All tests passed!" << std::endl;
    return 0;
}