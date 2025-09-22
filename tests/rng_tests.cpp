#include "rng/rng.hpp"
#include <cassert>

int main() {
    rng::Generator g1(123), g2(123), g3(456);
    // Same seed -> same first number
    assert(g1.uniform_int(0, 10) == g2.uniform_int(0, 10));
    // Different seed -> likely different (not guaranteed but very likely)
    // This is a smoke test:
    int a = g1.uniform_int(0, 10);
    int b = g3.uniform_int(0, 10);
    assert(a >= 0 && a <= 10);
    assert(b >= 0 && b <= 10);
    return 0;
}