/*
 * Advanced Random Number Generator
 * This program takes user inputs for seed, range, and count, then generates a list of random numbers
 * within the specified range. It also calculates and displays the mean of the generated numbers.
 * Author: Nick Terrel
 * Date: September 22, 2025
 */

#include <iostream>
#include "rng.hpp"

using namespace std;
using namespace rng;

int main() {
    // Greet the user
    cout << "Welcome to the Advanced Random Number Generator!" << endl;

    int seed, count, min, max;

    // Get user input for seed
    cout << "Enter a seed value: ";
    cin >> seed;

    // Get user input for range
    cout << "Enter the minimum value: ";
    cin >> min;
    cout << "Enter the maximum value: ";
    cin >> max;

    // Get user input for the number of random numbers to generate
    cout << "How many random numbers would you like to generate? ";
    cin >> count;

    Generator generator(seed);
    auto randomNumbers = generator.uniform_ints(count, min, max);

    // Display the generated numbers
    cout << "\nGenerated Random Numbers:" << endl;
    for (int num : randomNumbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}