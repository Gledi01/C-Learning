#include <iostream>
using namespace std;

class Akun {
private:
    int saldo;

public:
    void setSaldo(int s) { saldo = s; }
    int getSaldo() { return saldo; }
};

int main() {
    Akun a;
    a.setSaldo(1000);
    cout << a.getSaldo();
    return 0;
}
