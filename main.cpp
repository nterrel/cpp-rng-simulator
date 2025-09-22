/*
 * Random Number Generator
 * This program takes an integer input from the user, uses it as a seed for the random number generator, 
 * and generates a random number within the range [0, 512].
 * Author: Nick Terrel
 * Date: September 22, 2025
 */

#include <iostream>
#include <cstdlib> // For srand and rand
#include <ctime>   // For time

using namespace std;

int main() {
    // Greet the user
    cout << "Hello, let's try some input/output!" << endl;

    int num; // Variable to hold user input

    cout << "Enter a number: "; // Prompt the user for input
    cin >> num; // Take input from the user

    srand(num); // Use the input as the seed for the random number generator

    int randomNumber = rand() % 513; // Generate a random number within the range [0, 512]

    cout << "Random number generated (0-512): " << randomNumber << endl; // Output the random number

    return 0;
}