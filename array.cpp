#include <iostream>
using namespace std;

int main() {
    string buku[4] = {
        "Pemrograman C++",
        "Belajar HTML",
        "Belajar Java",
        "Algoritma"
    };

    int harga[4] = {
        50000,
        40000,
        55000,
        60000
    };

    int pilihan, jumlah;
    int total = 0;
    int lagi = 1;
    int uang;

    while (lagi == 1) {

        cout << "\n===== BOOK STORE =====" << endl;

        for (int i = 0; i < 4; i++) {
            cout << i + 1 << ". " << buku[i]
                 << " - Rp" << harga[i] << endl;
        }

        cout << "\nPilih buku (1-4): ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 4) {

            cout << "Jumlah buku: ";
            cin >> jumlah;

            total = total + (harga[pilihan - 1] * jumlah);

            cout << "Berhasil ditambahkan!" << endl;

        } else {
            cout << "Pilihan tidak tersedia!" << endl;
        }

        cout << "Pesan buku lagi? (1 = Ya, 0 = Tidak): ";
        cin >> lagi;
    }

    // Pembayaran
    cout << "\n===== PEMBAYARAN =====" << endl;
    cout << "Total belanja: Rp" << total << endl;

    uang = 0;

    while (uang < total) {
        cout << "Masukkan uang: Rp";
        cin >> uang;

        if (uang < total) {
            cout << "Uang tidak cukup!" << endl;
        }
    }

    // Struk
    cout << "\n===== STRUK =====" << endl;
    cout << "Total      : Rp" << total << endl;
    cout << "Pembayaran : Rp" << uang << endl;
    cout << "Kembalian  : Rp" << uang - total << endl;

    cout << "\nTerima kasih!" << endl;

    return 0;
}