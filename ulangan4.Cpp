#include <iostream>
using namespace std;

// Fungsi untuk menghitung hasil kali dua bilangan
int hitungKali(int a, int b) {
    return a * b;
}

int main() {
    int bilangan1, bilangan2, hasil;

    // Input dua bilangan dari pengguna
    cout << "Masukkan bilangan pertama: ";
    cin >> bilangan1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;

    // Panggil fungsi untuk menghitung perkalian
    hasil = hitungKali(bilangan1, bilangan2);

    // Output hasil perkalian
    cout << "Hasil kali dari " << bilangan1 << " dan " << bilangan2 << " adalah: " << hasil << endl;

// return 0;
}
