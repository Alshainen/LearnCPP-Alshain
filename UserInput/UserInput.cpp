//
// Created by Alshain on 11/10/2026.
//
#include <iostream>
#include "UserInput.h"

int main() {
    // cout << (operator penyisipan / output)
    // cin >> (operator ekstraksi / input)

    std::string name;
    int age;
    // Wajib deklarasi dulu, ga bisa barengan kayak bahasa lain.

    std::cout << "Siapa nama kamu?:";
    std::cin >> name; // Format cacat

    std::cout << "Halo " << name << std::endl;

    std::cout << "Berapa umurmu?:";
    std::cin >> age;
    std::cin.ignore(); // Buang enter yang tersisa.
    // Bisa jg pakai (cek getline bawah)

    std::cout << "Wow umurmu " << age << std::endl;

    // Kalau mau input full name (with space):
    std::string nama;
    std::getline(std::cin,nama); // The best untuk string input.
    // Bisa jg pakai (std::ws dengan = (std::cin >> std::ws, nama))
    // Ini akan include spasi.

    std::cout << "Halo " << nama;

    return 0;
}