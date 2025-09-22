/*
 * Random Number Generator
 * This program takes an integer input from the user, uses it as a seed for the random number generator, 
 * and generates a random number within the range [0, 512].
 * Author: Nick Terrel
 * Date: September 22, 2025
 */

#include <iostream>
#include <optional>
#include <string>
#include "rng/rng.hpp"

static std::optional<long long> parse_seed_from_stdin() {
    std::cout << "Enter an integer seed (or press Ctrl+D to cancel): ";
    long long seed;
    if (std::cin >> seed) return seed;
    return std::nullopt;
}

int main(int argc, char** argv) {
    // CLI: ./random-number [seed] [lo hi]
    long long seed = 0;
    int lo = 0, hi = 512;

    if (argc >= 2) seed = std::stoll(argv[1]);
    else {
        auto s = parse_seed_from_stdin();
        if (!s) { std::cerr << "No seed provided.\n"; return 1; }
        seed = *s;
    }
    if (argc == 4) { lo = std::stoi(argv[2]); hi = std::stoi(argv[3]); }

    if (lo > hi) { std::cerr << "Error: lo must be <= hi.\n"; return 1; }

    rng::Generator gen(static_cast<std::uint64_t>(seed));
    int value = gen.uniform_int(lo, hi);
    std::cout << "Random number generated (" << lo << "-" << hi << "): " << value << "\n";
    return 0;
}