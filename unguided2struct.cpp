#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
};

int main() {
    Person p;
    p.name = "Luffy";
    p.age = 20;
    
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;

    return 0;
}

