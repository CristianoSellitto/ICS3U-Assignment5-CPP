// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in November 2022
// A program that counts the number of positive numbers,
// negative numbers, and zeros the user inputs

#include <iostream>
#include <string>

float chosenNumber;
int numberOfPositives;
int numberOfNegatives;
int numberOfZeros;

int main() {
    // Counts the number of positive numbers,
    // negative numbers, and zeros the user inputs

    std::string chosenText;
    std::string finalText = "You entered ";
    try {
        while (true) {
            std::cout << "Enter a number (input 'stop' to end): ";
            std::cin >> chosenText;
            if (chosenText == "stop") {
                if (numberOfPositives == 1) {
                    finalText = finalText + "1 positive, ";
                } else {
                    finalText =
                        finalText +
                        std::to_string(numberOfPositives) +
                        " positives, ";
                }
                if (numberOfNegatives == 1) {
                    finalText = finalText + "1 negative, ";
                } else {
                    finalText =
                        finalText +
                        std::to_string(numberOfNegatives) +
                        " negatives, ";
                }
                if (numberOfZeros == 1) {
                    finalText = finalText + "1 zero, ";
                } else {
                    finalText =
                    finalText +
                    std::to_string(numberOfZeros) +
                    " zeros, ";
                }
                std::cout << std::endl;
                std::cout << finalText;
                std::cout << std::endl;
                break;
            } else {
                chosenNumber = stof(chosenText);
                if (chosenNumber > 0) {
                    numberOfPositives++;
                } else if (chosenNumber < 0) {
                    numberOfNegatives++;
                } else {
                    numberOfZeros++;
                }
            }
        }
    } catch (std::invalid_argument) {
        std::cout << std::endl;
        std::cout << chosenText << " isn't a number.";
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
