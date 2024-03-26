#include <iostream>
#include <map>

using namespace std;

string ganjilGenap(int num) {
    return (num % 2 == 0) ? "genap" : "ganjil";
}

int main() {
    map<int, string> kategoriBilangan;

    for (int i = 1; i <= 10; ++i) {
        kategoriBilangan[i] = ganjilGenap(i);
    }

    for (const auto& pair : kategoriBilangan) {
        cout << pair.first << " adalah bilangan " << pair.second << endl;
    }

    return 0;
}
