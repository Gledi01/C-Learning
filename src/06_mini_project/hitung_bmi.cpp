/*
Algoritma Hitung berat badan BMI berobject oriented programming 
by @WayanGledy

note: boleh di modifikasi, tapi sertakan nama pembuatnya 
*/

#include <iostream>
using namespace std;

class BMI {
private:
    float berat;       // kg
    float tinggi;      // cm
    float nilaiBMI;

public:
    // Constructor
    BMI(float b, float t) {
        berat = b;
        tinggi = t;
        nilaiBMI = 0;
    }

    // Method untuk menghitung BMI
    void hitungBMI() {
        float tinggi_meter = tinggi / 100;
        nilaiBMI = berat / (tinggi_meter * tinggi_meter);
    }

    // Method untuk menentukan kategori
    string kategori() {
        if (nilaiBMI < 18.5)
            return "Kurus";
        else if (nilaiBMI < 25)
            return "Normal";
        else if (nilaiBMI < 30)
            return "Overweight";
        else
            return "Obesitas";
    }

    // Method untuk menampilkan hasil
    void tampil() {
        cout << "\n===== HASIL BMI =====" << endl;
        cout << "BMI Anda: " << nilaiBMI << endl;
        cout << "Kategori: " << kategori() << endl;
    }
};

int main() {
    float berat, tinggi;

    cout << "Masukkan berat badan (kg): ";
    cin >> berat;

    cout << "Masukkan tinggi badan (cm): ";
    cin >> tinggi;

    // Membuat objek
    BMI orang(berat, tinggi);

    orang.hitungBMI();
    orang.tampil();

    return 0;
}
