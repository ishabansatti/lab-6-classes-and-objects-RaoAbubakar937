#include <iostream>
using namespace std;

class Temperature {
private:
    double celsius;

public:
    Temperature(double c = 0.0) {
        if (c >= -273.15)
            celsius = c;
        else {
            cout << "Invalid temperature! Setting to 0°C.\n";
            celsius = 0.0;
        }
    }

    void setCelsius(double c) {
        if (c >= -273.15) {
            celsius = c;
        } else {
            cout << "Error: Temperature cannot be below absolute zero (-273.15°C).\n";
        }
    }

    double getCelsius() const {
        return celsius;
    }

    double getFahrenheit() const {
        return (celsius * 9.0 / 5.0) + 32;
    }

    double getKelvin() const {
        return celsius + 273.15;
    }
};