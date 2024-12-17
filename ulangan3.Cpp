#include <iostream> // Library untuk input/output
using namespace std;

int main() {
    int N, jumlah = 0; // N adalah input pengguna, jumlah untuk menyimpan hasil penjumlahan

    // Meminta pengguna memasukkan bilangan positif N
    cout << "Masukkan nilai N: ";
    cin >> N;

    // Validasi input N harus positif
    if (N <= 0) {
        cout << "Nilai N harus bilangan positif!" << endl;
        return 0;
    }

    // Perulangan untuk menjumlahkan bilangan genap dari 1 hingga N
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) { // Cek apakah bilangan genap
            jumlah += i; // Tambahkan bilangan genap ke variabel jumlah
        }
    }

    // Output hasil penjumlahan bilangan genap
    cout << "Jumlah bilangan genap dari 1 hingga " << N << " adalah: " << jumlah << endl;

// return 0;
}

