#include <cmath>     // std::abs, std::sqrt, std::pow
#include <cstdlib>   // std::srand, std::rand
#include <ctime>     // std::time
#include <iostream>  // std::cin, std::cout, std::getline
#include <string>    // std::string

int main()
{
  int user_input = 0;
  int num1;
  int num2;
  int product;
  int quotient;
  std::cout << "Choose a number below to use\n" << "1. Addition\n" << "2. Subtraction\n" << "3. Multipilcation\n" << "4. Divide\n" << "5. Square root\n";

  if (user_input == 1) {
    std::cout << "Choose 2 numbers to add.\n";
    std::cin >> num1 >> num2;
    std::cout << "Your sum is " << (num1 + num2) << std::endl;
    
  }
  if (user_input == 2) {
    std::cout << "Choose 2 numbers to subtract.\n";
    std::cin >> num1 >> num2;
    std::cout << "Your sum is" << (num1 - num2) << std::endl;
  }
  if (user_input == 3) {
    std::cout << "Choose 2 numbers to multiply.\n";
    std::cin >> num1 >> num2;
    std::cout << "Your product is " << (num1 * num2) << std::endl; 
  }
  if (user_input == 4) {
    std::cout << "Choose 2 numbers to divide\n";
    std::cin >> num1 >> num2;
    std::cout << "Your quotient is " << (num1 / num2) << std::endl;
  }
  if (user_input == 5) {
    std::cout << "Choose a number to square root that is above or equal to 0\n";
    std::cin >> num1;
    if (num1 < 0) {
      std::cout << "Error: Your number does not fit the criteria (Cannot be negative)";
    }
    std::cout << "Your answer is " << sqrt(num1) << std::endl;
    
  }
  return 0;
}
