#include <iostream>
using namespace std;

class Rectangle {
public:
    double length;
    double width;

    double area() {
        return length * width;
    }
};

void compare(Rectangle a, Rectangle b) {
    double area1 = a.area();
    double area2 = b.area();

    if (area1 > area2) {
        cout << "Rectangle A has larger area: " << area1 << endl;
    }
    else if (area2 > area1) {
        cout << "Rectangle B has larger area: " << area2 << endl;
    }
    else {
        cout << "Both rectangles have equal area: " << area1 << endl;
    }
}

int main() {
    Rectangle r1, r2;

    cout << "Enter length and width of Rectangle A: ";
    cin >> r1.length >> r1.width;

    cout << "Enter length and width of Rectangle B: ";
    cin >> r2.length >> r2.width;

    compare(r1, r2);

    return 0;
}