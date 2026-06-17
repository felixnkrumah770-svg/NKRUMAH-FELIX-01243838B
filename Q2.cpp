#include <iostream>
#include <iomanip>
using namespace std;

int main()
 {
     double voltage, current, resistance, power;

    cout << "Enter Voltage (V):";
    cin >> voltage;

    cout << "Enter Current (I):";
    cin >> current;

    cout << "Enter Resistance (R):";
    cin >> resistance;

    power = current * current * resistance;

    cout << fixed << setprecision(4);
    cout << "\nPower Consumed = " << power << " Watts" << endl;
    return 0;
}
