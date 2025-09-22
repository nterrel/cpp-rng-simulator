#include "rng/rng.hpp"

namespace rng {

Generator::Generator(std::uint64_t seed) : engine_(seed) {}

int Generator::uniform_int(int lo, int hi) {
    std::uniform_int_distribution<int> dist(lo, hi);
    return dist(engine_);
}

} // namespace rng
