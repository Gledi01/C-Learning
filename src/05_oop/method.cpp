#include <iostream>
using namespace std;

class Kalkulator {
public:
    int tambah(int a, int b) {
        return a + b;
    }
};

int main() {
    Kalkulator k;
    cout << k.tambah(5,3);
    return 0;
}
