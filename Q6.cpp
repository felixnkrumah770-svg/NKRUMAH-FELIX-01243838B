#include <iostream>
#include <iomanip>

using namespace std;

int main()
 {
 	
    double R, L, Kt, V;
    double I, speed, power;

    cout << "DC MOTOR SIMULATOR\n";
    cout << "------------------\n";

    cout << "Enter Resistance (R) in Ohms: ";
    cin >> R;

    cout << "Enter Inductance (L) in Henrys: ";
    cin >> L;

    cout << "Enter Torque Constant (Kt) in N.m/A: ";
    cin >> Kt;

    cout << "Enter Applied Voltage (V) in Volts: ";
    cin >> V;

    // Calculations
    I = V / R;
    speed = V / Kt;
    power = V * I;

    cout << fixed << setprecision(4);

    cout << "\n----- RESULTS -----\n";
    cout << "Current: " << I << " A" << endl;
    cout << "Motor Speed: " << speed << " rad/s" << endl;
    cout << "Power: " << power << " W" << endl;

    return 0;
}
