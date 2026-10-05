#include <iostream>
using namespace std;

int main() {
    int pilihan, jumlah;
    int harga, total = 0;
    int uang, kembalian;
    int lagi = 1;

    string buku1 = "", buku2 = "", buku3 = "";
    int jumlah1 = 0, jumlah2 = 0, jumlah3 = 0;
    int harga1 = 0, harga2 = 0, harga3 = 0;

    while (lagi == 1) {

        cout << "\n===== BOOK STORE =====" << endl;
        cout << "1. Pemrograman C++ - Rp50000" << endl;
        cout << "2. Belajar HTML    - Rp40000" << endl;
        cout << "3. Belajar Java    - Rp55000" << endl;
        cout << "4. Algoritma       - Rp60000" << endl;

        cout << "\nPilih buku (1-4): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                buku1 = "Pemrograman C++";
                harga1 = 50000;
                cout << "Jumlah: ";
                cin >> jumlah1;
                total += harga1 * jumlah1;
                break;

            case 2:
                buku2 = "Belajar HTML";
                harga2 = 40000;
                cout << "Jumlah: ";
                cin >> jumlah2;
                total += harga2 * jumlah2;
                break;

            case 3:
                buku3 = "Belajar Java";
                harga3 = 55000;
                cout << "Jumlah: ";
                cin >> jumlah3;
                total += harga3 * jumlah3;
                break;

            case 4:
                cout << "Jumlah: ";
                cin >> jumlah;
                total += 60000 * jumlah;
                break;

            default:
                cout << "Pilihan tidak tersedia!" << endl;
                continue;
        }

        cout << "\nPesan buku lagi? (1 = Ya, 0 = Tidak): ";
        cin >> lagi;
    }

    // Pembayaran
    cout << "\n===== PEMBAYARAN =====" << endl;
    cout << "Total: Rp" << total << endl;

    uang = 0;

    while (uang < total) {
        cout << "Masukkan uang: Rp";
        cin >> uang;

        if (uang < total) {
            cout << "Uang tidak cukup!" << endl;
        }
    }

    kembalian = uang - total;

    // Struk
    cout << "\n===== STRUK PEMBELIAN =====" << endl;

    if (jumlah1 > 0) {
        cout << buku1 << " x" << jumlah1
             << " = Rp" << harga1 * jumlah1 << endl;
    }

    if (jumlah2 > 0) {
        cout << buku2 << " x" << jumlah2
             << " = Rp" << harga2 * jumlah2 << endl;
    }

    if (jumlah3 > 0) {
        cout << buku3 << " x" << jumlah3
             << " = Rp" << harga3 * jumlah3 << endl;
    }

    cout << "--------------------------" << endl;
    cout << "Total     : Rp" << total << endl;
    cout << "Bayar     : Rp" << uang << endl;
    cout << "Kembalian : Rp" << kembalian << endl;

    cout << "\nTerima kasih!" << endl;

    return 0;
}