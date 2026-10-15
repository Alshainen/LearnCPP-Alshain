//
// Created by Alshain on 15/10/2026.
//
#include <iostream>
#include <cmath> // Agar pow, sqrt, dan fungsi math lainnya bisa digunakan
#include "MathRelatedFunctions.h"

#include <complex>

int main() {
    double x = 20;
    double y = 100;

    std::cout << std::max(x, y) << std::endl; // Cari terbesar
    std::cout << std::min(x, y) << std::endl; // Cari terkecil
    std::cout << std::pow(x, y) << std::endl; // Perpangkatan
    std::cout << std::sqrt(x) << std::endl; // Akar kuadrat
    std::cout << std::abs(-50) << std::endl; // Ubah neg ke pos
    std::cout << std::round(5.2) << std::endl; // Bulatkan desimal ke terdekat
    std::cout << std::ceil(5.2) << std::endl; // Bulatkan desimal ke atas
    std::cout << std::floor(5.2) << std::endl; // Bulatkan desimal ke bawah
    return 0;
}
