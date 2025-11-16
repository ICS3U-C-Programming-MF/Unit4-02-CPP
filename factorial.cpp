// copyright Maximiliano Fairman Nov 12th, 2025
// all rights reserved
// # Created on Nov 12th, 2025
// this program ask the user to enter a whole number.
// It then uses a do..while loop to calculate the factorial
// of that number.
#include <iostream>
#include <limits>  // for numeric limits
// provides a way to access information about the properties
// of various numeric types (like int, float, double, etc.)
#include <string>

int main() {
    std::string input2_value;
    int user_number;

    std::cout << "Enter a positive whole number: ";
    std::getline(std::cin, input2_value);

    try {
        user_number = std::stoi(input2_value);

        while (user_number < 0) {
            std::cout << "That is not a positive whole number. Try again.\n\n";
            std::cout << "Enter a positive whole number: ";
            std::getline(std::cin, input2_value);
            user_number = std::stoi(input2_value);
        }

        // process
        int factorial = 1;
        int counter = 1;

        while (counter <= user_number) {
            factorial *= counter;
            counter++;
        }

        std::cout << "counter = " << counter << "\n";
        std::cout << "factorial = " << factorial << "\n";
        std::cout << "The factorial of " << user_number << ".\n";
        std::cout << " is " << factorial << ".\n";
    } catch (const std::invalid_argument&) {
        std::cout << "Please enter a WHOLE NUMBER, ";
        std::cout << "not '" << input2_value << "'.\n";
    }
}

//  End of program
