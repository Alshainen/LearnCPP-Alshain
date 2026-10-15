//
// Created by Alshain on 15/10/2026.
//
#include <iostream>
#include "Switch.h"

int main() {
    std::cout << "1. Serang\n2.Gunakan Skill\n3.Bertahan\n4.Kabur\n" << std::endl;
    int action = 1;

    switch (action) {
        case 1:
            std::cout << "Kamu menyerang";
            break;
        case 2:
            std::cout << "Kamu menggunakan skill";
            break;
        case 3:
            std::cout << "Kamu bertahan";
            break;
        case 4:
            std::cout << "Kamu berhasil kabur";
            break;
        default:
            std::cout << "Opsi tidak valid";
    }
    return 0;
}