//
// Created by Alshain on 11/10/2026.
//
#include <iostream>
#include "ArithmeticOperator.h"

int main() {
    // Aritmatika.

    int anak = 100;

    std::cout << "Hasil Penjumlahan: " << anak + 11 << std::endl;
    std::cout << "Hasil Penjumlahan 1 (only 1): " << anak++ << std::endl;
    std::cout << "Hasil Pengurangan: " << anak - 101 << std::endl;
    std::cout << "Hasil Pengurangan 1 (only 1): " << anak-- << std::endl;
    std::cout << "Hasil Perkalian: " << anak * 10 << std::endl;
    std::cout << "Hasil Pembagian: " << anak / 20 << std::endl;
    std::cout << "Hasil Sisa Pembagian: " << anak % 20 << std::endl;

    return 0;
}