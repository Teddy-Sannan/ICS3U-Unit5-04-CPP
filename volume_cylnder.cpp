// Copyright (c) 2019 St. Mother Teresa High School All rights reserved.
//
// Created by: Teddy Sannan
// Created on: November 2019
// This program shows functions
// with user input

#include <cstdlib>
#include <string>
#include <iostream>
#include <cmath>


float volumeOfCylinder(int radius, int height) {
    // This program finds the volume

    float volume;

    volume = M_PI * pow(radius, 2) * height;

    return volume;
}


int main() {
    // calls other functions
    std::string heightFromUser;
    int heightFromUserNumber;
    std::string radiusFromUser;
    int radiusFromUserNumber;
    float volume;

    while (true) {
        std::cout << "Enter the height of the cylinder (cm): ";
        std::cin >> heightFromUser;

        std::cout << "Enter the radius of the cylinder (cm): ";
        std::cin >> radiusFromUser;

        try {
            heightFromUserNumber = std::stoi(heightFromUser);
            radiusFromUserNumber = std::stoi(radiusFromUser);

            if (heightFromUserNumber < 0 && radiusFromUserNumber < 0) {
            std::cout << "Invalid number inputted" << std::endl;

            } else {
            volume = volumeOfCylinder(heightFromUserNumber,
                                      radiusFromUserNumber);
            std::cout << "The volume of the cylinder is " << volume
            << "cm^3" << std::endl;
            break; }
        } catch (std::invalid_argument) {
            std::cout << "Not a valid number inputted" << std::endl;
            std::cout << "" << std::endl;
        }
    }
}
