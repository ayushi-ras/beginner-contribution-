// number guessing game in C++ using OOP concept 
// It also travct the number of attempt that the user takes to guess the number correctly

#include <iostream>
#include <cstdlib>
#include <ctime>

// Define the Game class
class NumberGuessGame {
public:
    // Constructor to initialize the game
    NumberGuessGame(int min, int max) : minNumber(min), maxNumber(max) {
        srand(static_cast<unsigned int>(time(nullptr)));
        secretNumber = rand() % (maxNumber - minNumber + 1) + minNumber;
        attempts = 0;
    }

    // Play the game
    void play() {
        std::cout << "Welcome to the Number Guessing Game!\n";
        std::cout << "I'm thinking of a number between " << minNumber << " and " << maxNumber << ".\n";

        int guess;
        bool isCorrect = false;

        while (!isCorrect) {
            std::cout << "Enter your guess: ";
            std::cin >> guess;

            attempts++;

            if (guess < minNumber || guess > maxNumber) {
                std::cout << "Invalid guess. Please enter a number between " << minNumber << " and " << maxNumber << ".\n";
            } else if (guess < secretNumber) {
                std::cout << "Too low! Try again.\n";
            } else if (guess > secretNumber) {
                std::cout << "Too high! Try again.\n";
            } else {
                isCorrect = true;
                std::cout << "Congratulations! You guessed the number " << secretNumber << " in " << attempts << " attempts.\n";
            }
        }
    }

// defining the variable in private

private:
    int minNumber;
    int maxNumber;
    int secretNumber;
    int attempts;
};

int main() {
    // Create a game with a range of 1 to 100
    NumberGuessGame game(5, 35);

    // Play the game by calling the function defined above
    game.play();

    return 0;
}
