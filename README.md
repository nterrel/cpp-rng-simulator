# 🎲 Random Number Generator (C++)

This repository contains a C++ program that demonstrates advanced random number generation. It includes:

- **Input/output handling**
- **Random number generation**
- **Unit tests**

---

## 📂 Project Structure

- `app/`: Contains the main application source code.
- `src/`: Contains the implementation of the random number generator library.
- `include/`: Contains the header files for the library.
- `tests/`: Contains unit tests for the library.
- `.github/workflows/`: Contains CI configuration files.

---

## ⚙️ Getting Started

### Prerequisites

- A C++17-compatible compiler (e.g., `clang++`, `g++`)
- CMake (version 3.16 or higher)

### Build and Run

1. Clone the repository:

    ```bash
    git clone https://github.com/nterrel/cpp-rng-simulator.git
    cd cpp-rng-simulator
    ```

2. Build the project:

    ```bash
    cmake -S . -B build
    cmake --build build
    ```

3. Run the application:

    ```bash
    ./build/random-number
    ```

4. Run the tests:

    ```bash
    ctest --test-dir build --output-on-failure
    ```

---

## 🛠️ Contributing

1. Fork the repository.
2. Create a new branch for your feature:

    ```bash
    git checkout -b feature-name
    ```

3. Commit your changes:

    ```bash
    git commit -m 'Add new feature'
    ```

4. Push to your branch:

    ```bash
    git push origin feature-name
    ```

5. Open a pull request.

---

## 📜 License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
