# CustomerNumberValidator

## Project Description
**CustomerNumberValidator** is a simple C++ command-line tool that validates customer numbers based on a specific format: two alphabetic characters followed by four digits (e.g., "AB1234"). This project is a practical demonstration of string validation using C++ Standard Library functions like `std::isalpha()` and `std::isdigit()`.

## Features
- Validates if the customer number matches the format: two alphabetic characters followed by four digits.
- Provides feedback on whether the entered customer number is valid or invalid.

## Requirements
- C++11 or later
- Xcode (for macOS users)
- Any C++ compiler (GCC, Clang, etc.)

## How to Run

1. Clone the repository:
    ```bash
    git clone https://github.com/your-username/CustomerNumberValidator.git
    ```

2. Navigate to the project directory:
    ```bash
    cd CustomerNumberValidator
    ```

3. Compile the program:
    ```bash
    g++ -std=c++11 -o customer_validator main.cpp
    ```

4. Run the program:
    ```bash
    ./customer_validator
    ```

5. Enter a customer number when prompted, and the program will validate if it meets the required format.

## Example

Input:
AB1234

Output:
Customer number is valid!

Invalid Input Example:
A12345

Output:
Customer number is invalid!

## Contributing

1. Fork the repository.
2. Create your feature branch (`git checkout -b feature/NewFeature`).
3. Commit your changes (`git commit -m 'Add some NewFeature'`).
4. Push to the branch (`git push origin feature/NewFeature`).
5. Open a pull request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.




