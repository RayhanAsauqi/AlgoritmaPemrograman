#include <iostream>
using namespace std;

int main()
{
    int jam, menit, detik;
    char am_pm;

    // waktu dalam jam
    cout << "Masukkan jam (12 jam): ";
    cin >> jam;

    if (jam < 1 || jam > 12)
    {
        cout << "Jam yang dimasukkan tidak valid." << endl;
        return 1;
    };

    // waktu dalam menit
    cout << "Masukkan menit: ";
    cin >> menit;

    if (menit < 0 || menit > 59)
    {
        cout << "Menit yang dimasukkan tidak valid." << endl;
        return 1;
    };

    // waktu dalam detik

    cout << "Masukkan detik: ";
    cin >> detik;

    if (detik < 0 || detik > 59)
    {
        cout << "Detik yang di masukkan tidak valid." << endl;
        return 1;
    };

    // format waktu

    cout << "Masukkan AM (A) atau PM (A): ";
    cin >> am_pm;

    if (am_pm != 'A' && am_pm != 'P')
    {
        cout << "Input AM / PM tidak valid." << endl;
        return 1;
    };

    if (am_pm == 'P' && jam != 12)
    {
        jam += 12;
    }
    else if (am_pm == 'A' && jam == 12)
    {
        jam = 0;
    };

    cout << "Waktu dalam format 24 jam: " << jam << ":" << menit << ":" << detik << endl;
}