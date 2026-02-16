#include <iostream>
using namespace std;

int main() {
    int pilih;
    cout << "1. Halo\n2. Keluar\n";
    cin >> pilih;

    if(pilih == 1)
        cout << "Halo!";
    else
        cout << "Keluar";
    return 0;
}
