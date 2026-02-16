#include <iostream>
using namespace std;

int tambah(int a, int b) { return a + b; }
double tambah(double a, double b) { return a + b; }

int main() {
    cout << tambah(2,3) << endl;
    cout << tambah(2.5,3.5);
    return 0;
}
