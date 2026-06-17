#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() 
{
	
	
    const double PI = 3.141592653589793;

    double R, L, C, f;

    cout << "AC CIRCUIT SIMULATOR (SERIES RLC)\n";
    cout << "---------------------------------\n";

    cout << "Enter Resistance (R) in Ohms: ";
    cin >> R;

    cout << "Enter Inductance (L) in Henrys: ";
    cin >> L;

    cout << "Enter Capacitance (C) in Farads: ";
    cin >> C;

    cout << "Enter Frequency (f) in Hertz: ";
    cin >> f;

    double XL = 2 * PI * f * L;
    double XC = 1 / (2 * PI * f * C);

    double X = XL - XC;

    double Z = sqrt(R * R + X * X);

    double phaseAngleRad = atan(X / R);
    double phaseAngleDeg = phaseAngleRad * 180 / PI;

    double powerFactor = cos(phaseAngleRad);

    cout << fixed << setprecision(4);

    cout << "\n----- RESULTS -----\n";
    cout << "Inductive Reactance (XL): " << XL << " Ohms" << endl;
    cout << "Capacitive Reactance (XC): " << XC << " Ohms" << endl;
    cout << "Impedance (Z): " << Z << " Ohms" << endl;
    cout << "Phase Angle: " << phaseAngleDeg << " Degrees" << endl;
    cout << "Power Factor: " << powerFactor << endl;

    return 0;
}
