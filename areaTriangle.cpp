// Copyright (c) 2019 Matsuru All rights reserved.
//
// Created by: Matsuru Hoshi
// Created on: Nov 2019
// This is program triangle calcualtre with 2 funcitons

#include <iostream>
#include <string>

void Area(float base, float height) {
    // This'll calcilate the area of a triangle

    // declaring area
    // process
    float area = (base * height) / 2;

    // output
    std::cout << "\nThe area is " << area << " units squared." << std::endl;
}

main() {
    // This is asks for the base and hieght, then it  runs area()

    // variables
    std::string stringBase;
    std::string stringHeight;
    float base = 0;
    float height = 0;

    // Welcomes the user
    std::cout << "Hi, this is TRIANGLE AREA CALCULATOR." << std::endl;
    std::cout << "Press Enter to continue." << std::endl;
    std::cin.ignore();

    // input
    std::cout << "What is the base: " << std::endl;
    std::cin >> stringBase;
    std::cout << "What is the height: " << std::endl;
    std::cin >> stringHeight;

    while (true) {
        try {
            // turns variables into float
            base = std::stof(stringBase);
            height = std::stof(stringHeight);

            // runs Area()
            Area(base, height);
            break;
        } catch (std::invalid_argument) {
            std::cout << "Invalid input. Try again.";
            continue;
        }
    }
}
