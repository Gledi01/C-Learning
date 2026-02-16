#include <iostream>
using namespace std;

int main() {
    
    float a, t;
    float luas;
    cout<<"Masukan panjang alas: ";
    cin>>a;
    
    cout<<"Masukan Tinggi segitiga: ";
    cin>>t;
    luas = (a * t) / 2;
    cout<<"Luas segitiga di ketahui adalah : "<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"t = "<<t<<endl;
    cout<<a<<" * "<<t<<" / 2"<<endl;
    cout<<"= "<<luas<<endl;
}
