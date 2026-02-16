#include <iostream>
using namespace std;

class Orang {
public:
    string nama;
};

int main() {
    Orang o;
    o.nama = "Andi";
    cout << o.nama;
    return 0;
}
