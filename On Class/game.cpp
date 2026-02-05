#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

void playGame() {
    int numberToGuess = rand() % 100 + 1; // Random number between 1 and 100
    int playerGuess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Try to guess the number between 1 and 100." << endl;

    do {
        cout << "Enter your guess: ";
        if (!(cin >> playerGuess)) {
            cout << "Invalid input! Please enter a number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        attempts++;

        if (playerGuess < numberToGuess) {
            cout << "Too low! Try again." << endl;
        } else if (playerGuess > numberToGuess) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        }
    } while (playerGuess != numberToGuess);
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Initialize random seed in main()
    playGame();
    return 0;
}
