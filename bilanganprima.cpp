#include <iostream>
using namespace std;

// Fungsi untuk mengecek apakah sebuah angka adalah bilangan prima
bool isPrima(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int angka;
    char lagi;

    cout << "=== PROGRAM CEK BILANGAN PRIMA ===" << endl;

    do {
        cout << "\nMasukkan sebuah angka: ";
        cin >> angka;

        if (isPrima(angka)) {
            cout << angka << " adalah bilangan PRIMA." << endl;
        } else {
            cout << angka << " BUKAN bilangan prima." << endl;
        }

        cout << "Cek angka lain? (y/n): ";
        cin >> lagi;
    } while (lagi == 'y' || lagi == 'Y');

    // Fitur tambahan: tampilkan semua bilangan prima dari 1 sampai batas tertentu
    int batas;
    cout << "\nMau lihat daftar bilangan prima dari 1 sampai berapa? ";
    cin >> batas;

    cout << "Bilangan prima dari 1 sampai " << batas << ": ";
    for (int i = 2; i <= batas; i++) {
        if (isPrima(i)) cout << i << " ";
    }
    cout << endl;

    return 0;
}
