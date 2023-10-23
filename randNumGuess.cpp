// Copyright Marli Peters 2023 All rights reserved.
// Created By: Marli Peters
// Date: Oct. 23, 2023
// This program asks the user to guess a randomly generated
// number then tells user if the guess was correct.

#include <cstdlib>
#include <iostream>

int main() {
    // setting random number
    int answer;

    srand((unsigned)time(NULL));

    answer = rand() % 9 + 0;

    // get user input
    int guess;

    std::cout << "Guess random number between 0 and 9 number: ";
    std::cin >> guess;
    std::cout << "";

    // check if guess is correct
    if (guess == answer) {
        std::cout << "Your guess was correct!";
    } else {
        std::cout << "Your guess was incorrect!";
    }
}
