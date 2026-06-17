#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	
    double Np, Ns;
    double Vp, Ip;

    cout << "SIMPLE TRANSFORMER SIMULATOR\n";
    cout << "============================\n";

    cout << "Enter Primary Turns (Np): ";
    cin >> Np;

    cout << "Enter Secondary Turns (Ns): ";
    cin >> Ns;

    cout << "Enter Primary Voltage (Vp) in Volts: ";
    cin >> Vp;

    cout << "Enter Primary Current (Ip) in Amperes: ";
    cin >> Ip;

    double turnsRatio = Ns / Np;
    double voltageRatio = turnsRatio;
    double currentRatio = Np / Ns;

    double Vs = Vp * voltageRatio;
    double Is = Ip * currentRatio;

    // Ideal transformer phase shift
    double phaseAngle = 0.0;

    cout << fixed << setprecision(4);

    cout << "\n----- RESULTS -----\n";
    cout << "Turns Ratio (Ns/Np): " << turnsRatio << endl;
    cout << "Voltage Ratio (Vs/Vp): " << voltageRatio << endl;
    cout << "Current Ratio (Is/Ip): " << currentRatio << endl;
    cout << "Secondary Voltage (Vs): " << Vs << " V" << endl;
    cout << "Secondary Current (Is): " << Is << " A" << endl;
    cout << "Phase Angle Shift: " << phaseAngle << " Degrees" << endl;

    return 0;
}
