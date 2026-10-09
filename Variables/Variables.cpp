//
// Created by Alshain on 09/10/2026.
//
#include <iostream>
#include "Variables.h"

int main() {

    int integer = 10;
    std::cout << "Ini adalah integer (bilangan bulat) " << integer << std::endl;

    double decimal = 5.10;
    std::cout << "Ini adalah double (bilangan desimal) " << decimal << std::endl;

    char character = 'a'; // Tanda kutip tunggal
    std::cout << "Ini adalah character (satu karakter) " << character << std::endl;

    bool boolean = false; // true = 1, false = 0
    std::cout << "Ini adalah boolean (true / false) " << boolean << std::endl;

    std::string name = "Alshain";
    std::cout << "Ini adalah string (teks biasa) " << name << std::endl;

    return 0;
}