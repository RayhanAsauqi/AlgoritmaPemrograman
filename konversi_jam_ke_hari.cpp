#include <iostream>

int main()
{
    std::cout << "Nama Programmer : Rayhan Alsauqi 120103041" << std::endl;
    std::cout << "Versi Program   : Contoh1_Tipe_Data_Dasar" << std::endl;
    std::cout << "Tgl Pembuatan   : 27 April 2023" << std::endl;
    std::cout << "Tgl Revisi      : 30 April 2023" << std::endl;
    
    int jam;
    const int jamPerHari = 24; // Jumlah jam dalam satu hari

    std::cout << "Masukkan jumlah jam: ";
    std::cin >> jam;

    if (jam < 0)
    {
        std::cout << "Masukkan jumlah jam yang valid (>= 0)." << std::endl;
        return 1;
    }

    int hari = jam / jamPerHari;    // Menghitung jumlah hari
    int sisaJam = jam % jamPerHari; // Menghitung jumlah jam yang tersisa

    std::cout << "Hasil konversi: " << hari << " hari " << sisaJam << " jam" << std::endl;

    return 0;
}
