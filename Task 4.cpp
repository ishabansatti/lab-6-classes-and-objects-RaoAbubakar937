#include <iostream>
using namespace std;

class Person {
    string name;
    int age;

public:
    Person() {
        name = "Unknown";
        age = 0;
    }


    Person(string n) {
        name = n;
        age = 0;
    }

    Person(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person p1;

    Person p2("Ali");

    Person p3("Ahmed", 20);

    cout << "Person 1: ";
    p1.display();

    cout << "Person 2: ";
    p2.display();

    cout << "Person 3: ";
    p3.display();

    return 0;
}