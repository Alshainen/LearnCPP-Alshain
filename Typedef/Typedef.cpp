//
// Created by Alshain on 09/10/2026.
//
#include <iostream>
#include "Typedef.h"

// typedef = kata kunci khusus yang digunakan untuk membuat nama tambahan
//           (alias) bagi tipe data lain.
//           Nama pengenal baru untuk tipe data yang sudah ada.
//           Membantu kode lebih mudah dibaca dan mengurangi kesalahan pengetikan.

// Maksudnya: typedef digunakan untuk memberikan nama lain kepada tipe data yang sudah ada.

typedef std::string string;

int main() {
    // Dari yang awalny harus ketik std::string, sekarang cmn string aja karena defenisi tipenya udah diubah.
    // Berguna sih, 11/12 sama using std::string yang tinggal ketik string juga.
    // Tapi using bisa untuk cout dan banyak hal, sedangkan typedef hell nah.
    string nama = "Alshain";
    std::cout << nama;

    return 0;
}