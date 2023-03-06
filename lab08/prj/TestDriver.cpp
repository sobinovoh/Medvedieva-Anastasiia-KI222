#include <iostream>
#include <cmath>
#include <conio.h>
#include <Windows.h>
#include <iomanip>
#include "ModulesMedvedieva.h"

using namespace std;

int main() {

    string sentence;
      SetConsoleCP (1251);
      SetConsoleOutputCP (1251);

    double x, y, z, S;
    cout << "¬вед≥ть значенн€ x: ";
    cin >> x;
    cout << "¬вед≥ть значенн€ y: ";
    cin >> y;
    cout << "¬вед≥ть значенн€ z: ";
    cin >> z;

    double numerator = 3 * sin(sqrt(12 * pow(x, 2)) / pow(log10(x - 3), 2));
    double denominator = 2 * z;
    S = numerator + denominator;

    cout << "«наченн€ S: " << std::setprecision(3) << S << endl;

    return 0;
}
