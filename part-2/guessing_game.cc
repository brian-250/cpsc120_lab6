// Max Rivas
// CPSC 120-01
// 2022-10-13
// Rivas.max11@csu.fullerton.edu
// @Mrivas0331
//
// Lab 06-02
// Partners: @brian-250
//
// User tries to guess the number 42
//

#include <cmath>
#include <iostream>
#include <string>

const int kSecretNumber{42};

int main(int argc, char const *argv[]) {
  int last_guess = 0;
  std::cout << "Hi - I'm a computer and I've thought of a number between "
               "1 and 100.\n";
  std::cout << "Let's play a guessing game...\n";
  bool is_game_over{false};
  std::string input;
  while (!is_game_over) {
    std::cout << "What's your guess?> ";
    std::cin >> input;
    if (input == "n") {
      is_game_over = true;
    }
    int number = std::stoi(input);
    if ((number < 1) || (number > 100)) {
      std::cout << "Please guess a number between 1 and 100.\n";
    } else if ((number > 0) && (number < 101)) {
      if (number == 42) {
        std::cout << "Hooray! You guessed the secret number!!\n";
        std::cout << "Do you want to play again? (y or n)> ";
        std::string choice;
        std::cin >> choice;
        if (choice == "y") {
          number = 0;
          last_guess = 0;
        } else {
          is_game_over = true;
        }
      } else if (number != 42) {
        std::cout << "Nope - that's not it.\n";
        if (std::abs(kSecretNumber - number) <
            std::abs(kSecretNumber - last_guess)) {
          std::cout << "You're getting warmer!\n";
        } else {
          std::cout << "You're getting colder.\n";
        }
        last_guess = number;
      }
    }
  }
  return 0;
}