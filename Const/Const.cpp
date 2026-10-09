//
// Created by Alshain on 09/10/2026.
//
#include <iostream>
#include "Const.h"

int main() {
    // Ngebuat nilai ga bisa diubah (nilai tetap)

    double pie = 3.14;
    pie = 3.102;
    std::cout << "Nilainya berubah: " << pie << std::endl;

    const double pi = 3.14;
    //pi = 2.12; // Ga akan bisa
    // Harus:
    double penampungPi = pi;
    penampungPi = 7.19;
    std::cout << "Nilai penampungPi berubah: " << penampungPi << std::endl;
    std::cout << "Tapi nilai Pi tetap sama: " << pi << std::endl;
}