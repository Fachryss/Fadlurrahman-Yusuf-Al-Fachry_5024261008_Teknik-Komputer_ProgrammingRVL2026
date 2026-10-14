#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double L1 = 10;
    double L2 = 5;
    double theta1 = 30;
    double theta2 = 10;
    double pi = 3.141592653589793;

    // Konversi derajat ke radian
    double t1 = theta1 * pi / 180.0;
    double t2 = theta2 * pi / 180.0;

    // Hitung posisi end effector
    double x = L1 * cos(t1) + L2 * cos(t1 + t2);
    double y = L1 * sin(t1) + L2 * sin(t1 + t2);

    cout << "Posisi end effector:" << endl;
    cout << "x = " << x << " cm" << endl;
    cout << "y = " << y << " cm" << endl;

    return 0;
}