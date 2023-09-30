#include <iostream>

int main()
{

    std::cout << "Nama Programmer : Rayhan Alsauqi 120103041" << std::endl;
    std::cout << "Versi Program   : Contoh1_Tipe_Data_Dasar" << std::endl;
    std::cout << "Tgl Pembuatan   : 27 April 2023" << std::endl;
    std::cout << "Tgl Revisi      : 30 April 2023" << std::endl;
    
    int jumlah_kentang_terkupas = 0;
    int jumlah_kentang_yang_dibutuhkan;
    bool kantong_tidak_kosong = true;
    bool jumlah_kentang_tercukupi = false;
    std::cout << "Masukkan jumlah kentang yang dibutuhkan: ";
    std::cin >> jumlah_kentang_yang_dibutuhkan;

    while (!jumlah_kentang_tercukupi && kantong_tidak_kosong)
    {
        jumlah_kentang_terkupas++;

        if (jumlah_kentang_terkupas >= jumlah_kentang_yang_dibutuhkan)
        {
            jumlah_kentang_tercukupi = true;
            break;
        }
    }

    if (jumlah_kentang_tercukupi)
    {
        std::cout << "Jumlah kentang yang dibutuhkan terkupas.\n";
    }
    else
    {
        std::cout << "Kantong kosong atau tidak cukup kentang.\n";
    }

    return 0;
}
