/*
Algoritma pinjam buku berorientasi objek Programing 
by @WayanGledy

note: boleh di modifikasi, tapi sertakan nama pembuatnya 
*/

#include <iostream>
#include <string>
using namespace std;

// Class Buku
class Buku {
public:
    string judul;
    string pengarang;
    bool dipinjam; // false = tersedia, true = dipinjam

    // Constructor
    Buku(string j, string p) {
        judul = j;
        pengarang = p;
        dipinjam = false;
    }

    // Fungsi untuk meminjam buku
    void pinjam() {
        if (!dipinjam) {
            dipinjam = true;
            cout << "Buku \"" << judul << "\" berhasil dipinjam." << endl;
        } else {
            cout << "Buku \"" << judul << "\" sedang dipinjam orang lain." << endl;
        }
    }

    // Fungsi untuk mengembalikan buku
    void kembali() {
        if (dipinjam) {
            dipinjam = false;
            cout << "Buku \"" << judul << "\" telah dikembalikan." << endl;
        } else {
            cout << "Buku \"" << judul << "\" belum dipinjam." << endl;
        }
    }
};

// Class Peminjam
class Peminjam {
public:
    string nama;

    Peminjam(string n) {
        nama = n;
    }

    void pinjamBuku(Buku &buku) {
        cout << nama << " mencoba meminjam buku..." << endl;
        buku.pinjam();
    }

    void kembalikanBuku(Buku &buku) {
        cout << nama << " mengembalikan buku..." << endl;
        buku.kembali();
    }
};

int main() {
    // Buat buku
    Buku buku1("Harry Potter", "J.K. Rowling");
    Buku buku2("Laskar Pelangi", "Andrea Hirata");

    // Buat peminjam
    Peminjam user1("Ametyst");
    Peminjam user2("Raka");

    // Simulasi peminjaman
    user1.pinjamBuku(buku1); // berhasil
    user2.pinjamBuku(buku1); // gagal karena sudah dipinjam
    user1.kembalikanBuku(buku1); // kembalikan
    user2.pinjamBuku(buku1); // sekarang berhasil

    return 0;
}
