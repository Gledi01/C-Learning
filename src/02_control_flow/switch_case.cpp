#include <iostream>
using namespace std;

int main() {
    int pilihan;
    cin >> pilihan;

    switch (pilihan) {
        case 1: cout << "Satu"; break;
        case 2: cout << "Dua"; break;
        default: cout << "Tidak ada";
    }
    return 0;
}
