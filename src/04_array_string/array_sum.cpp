#include <iostream>
using namespace std;

int main() {
    int angka[3] = {10,20,30};
    int total = 0;
    for(int i=0;i<3;i++)
        total += angka[i];
    cout << total;
    return 0;
}
