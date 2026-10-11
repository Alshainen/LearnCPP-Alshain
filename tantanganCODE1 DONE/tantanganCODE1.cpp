//
// Created by Alshain on 11/10/2026.
//
#include <iostream>
#include "tantanganCODE1.h"

int main() {
    // Program Kasir Toko

    int subtotal;
    int total;
    double diskon = 10.0 / 100;
    double ppn = 11.0 / 100;

    std::cout << "Selamat datang di Toko Sumber Rejeki Pak Hendra\nSilahkan isi data dan pesanan anda.\n" << std::endl;

    std::string nama;
    std::cout << "Nama:";
    std::getline(std::cin, nama);

    std::string namaBarang;
    std::cout << "Nama barang:";
    std::getline(std::cin, namaBarang);

    int hargaSatuan;
    std::cout << "Harga barang:";
    std::cin >> hargaSatuan;

    int jumlahBeli;
    std::cout << "Jumlah barang:";
    std::cin >> jumlahBeli;
    subtotal = hargaSatuan * jumlahBeli;

    int totalDiskon = subtotal * diskon;
    int totalPPN = (subtotal - totalDiskon) * ppn ;

    total = subtotal - totalDiskon + totalPPN;
    total = total / 1000;
    total = total * 1000;

    int bayar;
    std::cout << "Bayar:";
    std::cin >> bayar;

    double poin = total * 1.5 / 10000;
    int kembalian = bayar - total;

    int uang50 = kembalian / 50000;
    int sisa = kembalian % 50000;
    int uang20 = sisa / 20000;
    sisa = sisa % 20000;
    int uang10 = sisa / 10000;
    sisa = sisa % 10000;
    int uang5 = sisa / 5000;
    sisa = sisa % 5000;
    int uang2 = sisa / 2000;
    sisa = sisa % 2000;
    int uang1 = sisa / 1000;

    std::cout << "===== STRUK TOKO SUMBER REJEKI =====" << std::endl;
    std::cout << "Pelanggan: " << nama << std::endl;
    std::cout << "Barang: " << namaBarang << std::endl;
    std::cout << "Harga satuan: " << hargaSatuan << std::endl;
    std::cout << "Jumlah: " << jumlahBeli << std::endl;
    std::cout << "Subtotal: " << subtotal << std::endl;
    std::cout << "Diskon: " << totalDiskon << std::endl;
    std::cout << "PPN: " <<  totalPPN << std::endl;
    std::cout << "Total: " << total << std::endl;
    std::cout << "Bayar: " << bayar << std::endl;
    std::cout << "Kembalian: " << kembalian << std::endl;
    std::cout << "Rp50000 x " << uang50 << std::endl;
    std::cout << "Rp20000 x " << uang20 << std::endl;
    std::cout << "Rp10000 x " << uang10 << std::endl;
    std::cout << "Rp5000 x " << uang5 << std::endl;
    std::cout << "Rp2000 x " << uang2 << std::endl;
    std::cout << "Rp1000 x " << uang1 << std::endl;
    std::cout << "Poin: " << poin << std::endl;

    return 0;
}

// Nilai = 100/100