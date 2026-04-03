#include <iostream>
using namespace std;

class Sensor {
    static int totalSensors;
    int id;

public:
    Sensor() {
        totalSensors++;     
        id = totalSensors;   
    }

    void display() {
        cout << "Sensor ID: " << id << endl;
    }

    static void showTotal() {
        cout << "Total Sensors: " << totalSensors << endl;
    }
};

int Sensor::totalSensors = 0;

int main() {
    Sensor s1, s2, s3, s4;

    s1.display();
    s2.display();
    s3.display();
    s4.display();

    Sensor::showTotal();

    return 0;
}