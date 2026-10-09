//
// Created by Alshain on 09/10/2026.
//
#include <iostream>
#include "Namespace.h"

namespace nilaiSatu {
    int nilai = 30;
}

namespace nilaiDua {
    int nilai = 50;
}

int main() {
    // Namespace = solusi untuk mencegah bentrok nama di project besar.
    //             Setiap entitas (variabel, fungsi, dsb.) butuh nama yang unik.
    //             Namespace membolehkan beberapa entitas punya nama yang sama, asalkan namespace-nya beda.

    int nilai = 90;

    std::cout << nilai << " Hasil untuk nilai dalam main" << std::endl;
    std::cout << nilaiSatu::nilai << " Hasil untuk nilai dalam nilaiSatu" << std::endl;
    std::cout << nilaiDua::nilai << " Hasil untuk nilai dalam nilaiDua" << std::endl;

    return 0;
}

// ada juga "using std::cout"
// artinya: Mulai dari sini, kalau aku mau cout ga perlu panjang pakai "std::cout" lagi.
//          Cukup cout aja (karena udah using).

// Berlaku untuk yang lainnya juga.