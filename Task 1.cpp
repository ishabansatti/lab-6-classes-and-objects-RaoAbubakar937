#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r);

    double area();
    double circumference();
};

Circle::Circle(double r) {
    radius = r;
}

double Circle::area() {
    return 3.14159 * radius * radius;
}

double Circle::circumference() {
    return 2 * 3.14159 * radius;
}

int main() {
    Circle c(5.0); 

    cout << "Area of Circle: " << c.area() << endl;
    cout << "Circumference of Circle: " << c.circumference() << endl;

    return 0;
}