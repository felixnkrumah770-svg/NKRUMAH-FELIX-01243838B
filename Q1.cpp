#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main()
 {
 	
    const double PI = 3.141592653589793;

    double R, L, C, f;

    cout << "SIMPLE ELECTRIC CIRCUIT SIMULATOR (SERIES RLC)\n";
    cout << "---------------------------------------------\n";

    cout << "Enter Resistance (R) in Ohms: ";
    cin >> R;

    cout << "Enter Inductance (L) in Henry: ";
    cin >> L;

    cout << "Enter Capacitance (C) in Farad: ";
    cin >> C;

    cout << "Enter Frequency (f) in Hertz: ";
    cin >> f;

    double XL = 2 * PI * f * L;          // Inductive Reactance
    double XC = 1 / (2 * PI * f * C);    // Capacitive Reactance

    double Z = sqrt(pow(R, 2) + pow((XL - XC), 2));

    double phaseAngle =
        atan((XL - XC) / R) * 180 / PI;

    cout << fixed << setprecision(4);

    cout << "\n----- RESULTS -----\n";
    cout << "Inductive Reactance (XL): " << XL << " Ohms\n";
    cout << "Capacitive Reactance (XC): " << XC << " Ohms\n";
    cout << "Impedance (Z): " << Z << " Ohms\n";
    cout << "Phase Angle: " << phaseAngle << " Degrees\n";
	return 0;
}
