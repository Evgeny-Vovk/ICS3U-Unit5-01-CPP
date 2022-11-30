// Copyright(c) 2022 Evgeny Vovk All rights reserved.
//
// Created by : Evgeny Vovk
// Created on : November 2022
// ICS3U-Unit5-01.cpp File, learning functions in C++.

#include <iostream>
#include <string>

std::string(celsius);
float celsiusAsFloat;
float fahrenheitAsFloat;

void fahrenheit() {
    std::cout << "Enter a temperature (°C): ";
    std::cin >> celsius;

    std::cout << "\n";
    try {
    celsiusAsFloat = std::stof(celsius);
    fahrenheitAsFloat = 9.0 / 5.0 * celsiusAsFloat + 32;
    std::cout << celsiusAsFloat << "°C is equal to "
              << fahrenheitAsFloat <<"°F.";
    } catch (std::invalid_argument) {
        std::cout << "Invalid input, please try again.";
    }

    std::cout << "\n\n\nDone.\n";
}

main() {
    fahrenheit();
}
