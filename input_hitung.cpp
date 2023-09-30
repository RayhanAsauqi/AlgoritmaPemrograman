#include <iostream>
#include <math.h>
using namespace std;    


int a,b,hasil;
 double c,d,hasil2; 

 int main()
{
    std::cout << "Nama Programmer : Rayhan Alsauqi 120103041" << std::endl;
    std::cout << "Versi Program   : Contoh1_Tipe_Data_Dasar" << std::endl;
    std::cout << "Tgl Pembuatan   : 27 April 2023" << std::endl;
    std::cout << "Tgl Revisi      : 30 April 2023" << std::endl;
 cout<<"Masukan Nilai 'a' dan 'b' !"<<endl;
 cout<<"a : ";
 cin>>a;
 cout<<"b : ";
 cin>>b;
 cout<<endl;
 cout<<"#### Operator Aritmatika (int)"<<endl;

 //Penambahan
 hasil = a + b;
 cout<<"a + b : "<<hasil<<endl;

 //Pengurangan
 hasil = a - b;
 cout<<"a - b : "<<hasil<<endl;

 //Perkalian
 hasil = a * b;
 cout<<"a * b : "<<hasil<<endl;

 //Pembagian
 hasil = a / b;
 cout<<"a / b : "<<hasil<<endl;

 //Modulus (sisa pembagian)
 hasil = a % b;
 cout<<"a % b : "<<hasil<<endl;

 cout<<"### Operator matematika (float)"<<endl;
 cout<<"Masukan Nilai 'c' dan 'd' !"<<endl;
 cout<<"c : ";
 cin>>c;
 cout<<"d : ";
 cin>>d; 
  cout<<endl;
 //Pembagian2
 hasil2 = c / d;
 cout<<"c / d : "<<hasil2<<endl;
 //Pangkat
 hasil2 = pow(c,d);
 cout<<"c ^ d : "<<hasil2<<endl;
 //Akar
 hasil2 = sqrt(c);
 cout<<"akar a : "<<hasil2<<endl;
 hasil2 = sqrt(d);
 cout<<"akar b : "<<hasil2<<endl;
}