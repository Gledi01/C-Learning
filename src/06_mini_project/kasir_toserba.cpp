/*
tantangan:

Algoritma kasir, user sebagai pembeli, dan diskon 5000, harga produk 15000
note: user harus menginput nama produk!

proyek OOP sederhana
*/

#include <iostream>
#include <iomanip>
using namespace std;

class Toko {
private:
    string nProduk;
    int hProduk;
    int diskon;

public:
    Toko(string nama) {
        nProduk = nama;
        hProduk = 15000;
        diskon = 5000;
    }

    int hitungTotal() {
        return hProduk - diskon;
    }

    void cetakStruk() {
        cout << "\n================================\n";
        cout << "         TOKO WAYAN\n";
        cout << "================================\n";

        cout << left  << setw(20) << "Produk"
             << right << setw(10) << nProduk << endl;

        cout << left  << setw(20) << "Harga"
             << right << setw(10) << hProduk << endl;

        cout << left  << setw(20) << "Diskon"
             << right << setw(10) << "-" + to_string(diskon) << endl;

        cout << "--------------------------------\n";

        cout << left  << setw(20) << "TOTAL"
             << right << setw(10) << hitungTotal() << endl;

        cout << "================================\n";
        cout << "   Terima Kasih Telah Belanja\n";
        cout << "================================\n";
    }
};

int main() {
    string nama;
    cout << "Masukan nama produk : ";
    getline(cin, nama);

    Toko toserba(nama);
    toserba.cetakStruk();
}
