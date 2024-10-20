//
//  main.cpp
//  CustomerNumberValidator
//
//  Created by Isaac Adeleke on 10/20/24.
//

#include <iostream>
#include <string>
#include <cctype>  // For isalpha() and isdigit()

bool validateCustomerNumber(const std::string& customerNumber) {
    // Check if the length is exactly 6 characters
    if (customerNumber.length() != 6) {
        return false;
    }

    // Check if the first two characters are alphabetic
    if (!std::isalpha(customerNumber[0]) || !std::isalpha(customerNumber[1])) {
        return false;
    }

    // Check if the next four characters are digits
    for (int i = 2; i < 6; ++i) {
        if (!std::isdigit(customerNumber[i])) {
            return false;
        }
    }

    // If all checks pass, the customer number is valid
    return true;
}

int main() {
    std::string customerNumber;
    
    // Input customer number
    std::cout << "Enter the customer number (format: AA1234): ";
    std::cin >> customerNumber;

    // Validate and output result
    if (validateCustomerNumber(customerNumber)) {
        std::cout << "Customer number is valid!" << std::endl;
    } else {
        std::cout << "Customer number is invalid!" << std::endl;
    }

    return 0;
}
