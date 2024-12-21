#include <iostream>
#include <limits>
#include <stdexcept>

// Function to perform calculation based on operator
double calculate(double num1, double num2, char op) {
    switch (op) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            // Check for division by zero
            if (num2 == 0) {
                throw std::runtime_error("Error: Division by zero!");
            }
            return num1 / num2;
        case '%':
            // Check for modulus by zero and ensure integer operands
            if (num2 == 0) {
                throw std::runtime_error("Error: Modulus by zero!");
            }
            return static_cast<int>(num1) % static_cast<int>(num2);
        default:
            throw std::invalid_argument("Error: Invalid operator!");
    }
}

// Function to clear input stream and handle invalid inputs
void clearInputStream() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {
    double num1, num2, result;
    char op;
    char continueCalc;

    std::cout << "***** Basic Calculator *****\n";

    do {
        // Input first number
        while (true) {
            std::cout << "Enter first number: ";
            if (std::cin >> num1) {
                break;
            }
            std::cout << "Invalid input. Please enter a number.\n";
            clearInputStream();
        }

        // Input operator
        while (true) {
            std::cout << "Enter operator (+, -, *, /, %): ";
            if (std::cin >> op) {
                if (op == '+' || op == '-' || op == '*' || op == '/' || op == '%') {
                    break;
                }
            }
            std::cout << "Invalid operator. Try again.\n";
            clearInputStream();
        }

        // Input second number
        while (true) {
            std::cout << "Enter second number: ";
            if (std::cin >> num2) {
                break;
            }
            std::cout << "Invalid input. Please enter a number.\n";
            clearInputStream();
        }

        // Perform calculation
        try {
            result = calculate(num1, num2, op);
            std::cout << "Result: " << num1 << " " << op << " " << num2 << " = " << result << std::endl;
        }
        catch (const std::exception& e) {
            std::cout << e.what() << std::endl;
            continue;
        }

        // Ask to continue
        std::cout << "Do you want to perform another calculation? (y/n): ";
        std::cin >> continueCalc;

        // Clear input stream to prevent issues with next iteration
        clearInputStream();

    } while (continueCalc == 'y' || continueCalc == 'Y');

    std::cout << "Calculator closed. Goodbye!\n";

    return 0;
}