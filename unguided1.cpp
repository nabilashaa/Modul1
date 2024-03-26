#include <iostream>

using namespace std;

int bilangan;
string ganjilGenap (int bilangan) {
    if (bilangan % 2 == 0) {
        return "genap";
    } else {
        return "ganjil";
    }
}

int main(){
    cout << "Masukkan bilangan : ";
    cin >> bilangan;
    string hasil = ganjilGenap(bilangan);
    cout << "Bilangan yang Anda masukkan adalah bilangan " << hasil << endl;

    return 0;
}
