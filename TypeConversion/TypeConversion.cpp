//
// Created by Alshain on 11/10/2026.
//
#include <iostream>
#include "TypeConversion.h"

int main() {
    // Ganti tipe data yang ini ke itu.

    double angka = 100.55;
    std::string setring = "100";

    std::cout << angka << " < Hasilnya sesuai double, desimal." << std::endl;
    std::cout << (int)angka << " < Hasilnya jadi int padahal nilai desimal." << std::endl;

    std::cout << std::to_string(angka) << " < Ini untuk angka to String" << std::endl;
    std::cout << std::stoi(setring) << " < Ini untuk String to Int" << std::endl;

    // Selebihnya bisa dicari sendiri, ini bahasa bikin gw mual.

    return 0;
}
