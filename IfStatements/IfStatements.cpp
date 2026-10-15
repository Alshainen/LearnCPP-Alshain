//
// Created by Alshain on 15/10/2026.
//
#include <iostream>
#include "IfStatements.h"

int main() {
    // Kalau kondisinya ini, lakukan ini. Kalau tidak maka lakukan yang lain.

    int age = 20;
    std::string name = "ali";

    if (age < 20) {
        std::cout << "Kamu didiskualifikasi!" << std::endl;
    }
    else {
        std::cout << "Selamat datang!" << std::endl;
    }

    if (name == "ali") {
        std::cout << "Halo" << std::endl;
    } else if (name == "al") {
        std::cout << "Hmm, namamu dekat, tapi sepertinya bukan, aku ragu." << std::endl;
    } else {
        std::cout << "Lu siapa empruy!?" << std::endl;
    }

    return 0;
}