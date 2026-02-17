/*
Algoritma Atm sederhana berorientasi objek programming 
by @Wayan

note: jika ingin di modifikasi, sertakan nama pembuat
*/

#include <iostream>
using namespace std;

class ATM {
private:
    int pin;
    double saldo;

public:
    // Constructor
    ATM(int p, double s) {
        pin = p;
        saldo = s;
    }

    // Login
    bool login() {
        int inputPin;
        cout << "Masukkan PIN: ";
        cin >> inputPin;

        if (inputPin == pin) {
            cout << "Login berhasil!\n";
            return true;
        } else {
            cout << "PIN salah!\n";
            return false;
        }
    }

    // Cek saldo
    void cekSaldo() {
        cout << "Saldo Anda: Rp " << saldo << endl;
    }

    // Setor uang
    void setor() {
        double jumlah;
        cout << "Masukkan jumlah setor: ";
        cin >> jumlah;

        if (jumlah > 0) {
            saldo += jumlah;
            cout << "Setor berhasil!\n";
        } else {
            cout << "Jumlah tidak valid!\n";
        }
    }

    // Tarik uang
    void tarik() {
        double jumlah;
        cout << "Masukkan jumlah tarik: ";
        cin >> jumlah;

        if (jumlah > saldo) {
            cout << "Saldo tidak cukup!\n";
        } else if (jumlah <= 0) {
            cout << "Jumlah tidak valid!\n";
        } else {
            saldo -= jumlah;
            cout << "Penarikan berhasil!\n";
        }
    }

    // Menu utama
    void menu() {
        int pilihan;
        do {
            cout << "\n===== MENU ATM =====\n";
            cout << "1. Cek Saldo\n";
            cout << "2. Setor Uang\n";
            cout << "3. Tarik Uang\n";
            cout << "4. Keluar\n";
            cout << "Pilih: ";
            cin >> pilihan;

            switch (pilihan) {
                case 1: cekSaldo(); break;
                case 2: setor(); break;
                case 3: tarik(); break;
                case 4: cout << "Terima kasih!\n"; break;
                default: cout << "Pilihan tidak valid!\n";
            }

        } while (pilihan != 4);
    }
};

int main() {
    // PIN default = 1234, saldo awal = 10.000.000
    ATM atm(1234, 1000000);

    if (atm.login()) {
        atm.menu();
    }

    return 0;
}
