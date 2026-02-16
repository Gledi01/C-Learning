#include <iostream>
using namespace std;

class Produk {
public:
    string nama;
    int harga;

    void tampil() {
        cout << nama << " - " << harga;
    }
};

int main() {
    Produk p;
    p.nama = "Buku";
    p.harga = 10000;
    p.tampil();
    return 0;
}
