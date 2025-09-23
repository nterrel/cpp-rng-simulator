#ifndef RNG_HPP
#define RNG_HPP

#include <random>
#include <vector>
#include <cstdint>

namespace rng {

class Generator {
public:
    explicit Generator(std::uint64_t seed);

    // Generate a single random integer within a range
    int uniform_int(int lo, int hi);

    // Generate multiple random integers within a range
    std::vector<int> uniform_ints(int count, int lo, int hi);

private:
    std::mt19937 engine_; // Random number engine
};

} // namespace rng

#endif // RNG_HPP