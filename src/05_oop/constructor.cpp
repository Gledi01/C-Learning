#include <iostream>
using namespace std;

class Mobil {
public:
    string merk;
    Mobil(string m) {
        merk = m;
    }
};

int main() {
    Mobil m("Toyota");
    cout << m.merk;
    return 0;
}
