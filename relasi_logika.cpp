#include <iostream>
using namespace std;  

int nilai;
 int x;
 int bil1,bil2,minim; 
 
 
int main()
{
    std::cout << "Nama Programmer : Rayhan Alsauqi 120103041" << std::endl;
    std::cout << "Versi Program   : Contoh1_Tipe_Data_Dasar" << std::endl;
    std::cout << "Tgl Pembuatan   : 27 April 2023" << std::endl;
    std::cout << "Tgl Revisi      : 30 April 2023" << std::endl;
 int nilai;
 nilai = 3>2; // hasil ungkapan : benar
 cout << "nilai = "<<nilai<<endl;
 nilai = 2>3; // hasil ungkapan : salah
 cout << "nilai = " <<nilai<<endl;

 x = 200;
 cout<<"( x >= 1) && (x <= 50) -> "
 <<(( x >= 1) && (x <= 50))<<'\n';
 cout<<"( x >= 1) || (x <= 50) -> "
 <<(( x >= 1) || (x <= 50))<<'\n';
 int bil1,bil2,minim;
 bil1 = 53;
 bil2 = 6;

 minim = bil1<bil2 ? bil1:bil2;
 cout << "Bilangan terkecil = "<<minim<<'\n';
}