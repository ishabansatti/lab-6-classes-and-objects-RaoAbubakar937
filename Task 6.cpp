#include <iostream>
using namespace std;

class Box {
public:
    double length;
    double width;
    double height;
    double volume() {
        return length * width * height;
    }
};

Box largerBox(Box a, Box b) {
    if (a.volume() > b.volume()) {
        return a;
    } else {
        return b;
    }
}

int main() {
    Box b1, b2, result;

    cout << "Enter length, width, height of Box 1: ";
    cin >> b1.length >> b1.width >> b1.height;

    cout << "Enter length, width, height of Box 2: ";
    cin >> b2.length >> b2.width >> b2.height;

    result = largerBox(b1, b2);

    cout << "\nBox with larger volume has dimensions:\n";
    cout << "Length: " << result.length << endl;
    cout << "Width: " << result.width << endl;
    cout << "Height: " << result.height << endl;

    return 0;
}