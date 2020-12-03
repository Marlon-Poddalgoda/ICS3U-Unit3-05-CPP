// Copyright (c) 2020 Marlon Poddalgoda, All rights reserved
//
// Created by Marlon Poddalgoda
// Created on December 2020
// This program identifies the month from a value

#include <iostream>
#include <string>

int main() {
    // this function identifies the month from a value

    std::cout << "This program identifies the month." << std::endl;

    // variable declarations
    int month_valueInt;

    // input
    std::cout << "Enter a number between 1-12: ";
    std::cin >> month_valueInt;
    std::cout << "" << std::endl;

    // process
    switch (month_valueInt) {
        case 1 :
            std::cout << "This month is January" << std::endl;
            break;
        case 2 :
            std::cout << "This month is February" << std::endl;
            break;
        case 3 :
            std::cout << "This month is March" << std::endl;
            break;
        case 4 :
            std::cout << "This month is April" << std::endl;
            break;
        case 5 :
            std::cout << "This month is May" << std::endl;
            break;
        case 6 :
            std::cout << "This month is June" << std::endl;
            break;
        case 7 :
            std::cout << "This month is July" << std::endl;
            break;
        case 8 :
            std::cout << "This month is August" << std::endl;
            break;
        case 9 :
            std::cout << "This month is September" << std::endl;
            break;
        case 10 :
            std::cout << "This month is October" << std::endl;
            break;
        case 11 :
            std::cout << "This month is November" << std::endl;
            break;
        case 12 :
            std::cout << "This month is December" << std::endl;
            break;
        default :
            std::cout << "Invalid month, try again." << std::endl;
    }
}
