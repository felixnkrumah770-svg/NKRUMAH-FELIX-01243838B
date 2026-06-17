#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    const double k = 8.99e9; // Coulomb's constant

    double q, r;
    double E, V;

    cout << "ELECTRIC FIELD AND POTENTIAL CALCULATOR\n";
    cout << "---------------------------------------\n";

    cout << "Enter charge (q) in Coulombs: ";
    cin >> q;

    cout << "Enter distance (r) in meters: ";
    cin >> r;

    if (r <= 0) {
        cout << "Distance must be greater than zero." << endl;
        return 1;
    }

    E = (k * q) / (r * r);
    V = (k * q) / r;

    cout << fixed << setprecision(4);

    cout << "\n----- RESULTS -----\n";
    cout << "Electric Field (E): " << E << " N/C" << endl;
    cout << "Electric Potential (V): " << V << " Volts" << endl;

    return 0;
}
