#include "rng.hpp"

namespace rng {

Generator::Generator(std::uint64_t seed) : engine_(seed) {}

int Generator::uniform_int(int lo, int hi) {
    std::uniform_int_distribution<int> dist(lo, hi);
    return dist(engine_);
}

std::vector<int> Generator::uniform_ints(int count, int lo, int hi) {
    std::uniform_int_distribution<int> dist(lo, hi);
    std::vector<int> numbers;
    for (int i = 0; i < count; ++i) {
        numbers.push_back(dist(engine_));
    }
    return numbers;
}

} // namespace rng
