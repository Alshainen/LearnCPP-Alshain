//
// Created by Alshain on 09/10/2026.
//
#include <iostream>
// Mengambil library I/O (Input / Output)
// Artinya “ambil kotak peralatan input-output” (input-output stream).
// Tanpa baris ini, C++ tidak kenal cout. Mirip import di bahasa lain.

int main() {
    std::cout << "Halo sahabat" << std::endl;
    std::cout << "Halo semua" << std::endl;

    // Atau lebih cepat:
    std::cout << "Selamat siang" << std::endl << "Salam sejahtera" << std::endl;

    // Lebih cepat lagi:
    std::cout << "Pagi yang indah\nTemanku semuanya" << std::endl;
    // Tetap pakai endl agar menghindari lupa aja.

    // cout = Console Output (Console log jir)
    // << = Arah kirim (Susah emang harus dikasih tau manual)
    // std = standard. Semua alat bawaan C++ (termasuk cout) disimpan dalam kelompok bernama std.
    //       Defaultnya lah ya.
    // :: = “di dalam”. std::cout = “cout yang ada di dalam std”.
    // endl = buat agar nextnya baris baru (println kalau di Java). Intinya Endline lah ya.

    return 0; // mengirim kode status ke sistem operasi, 0 berarti sukses.
              // Itu yang muncul di panel output: exited with code=0
    // Meski banyak dibilang wajib ada itu, sebenarnya tidak terlalu.
    // Khusus main, kalau kamu tidak menulis return sama sekali,
    // C++ otomatis menganggapnya return 0;. Itu maksudnya “tidak wajib”.
    // Tapi banyak orang tetap menulisnya supaya jelas.
}


// Intinya ini cara menampilkan teks ke console, udah.