#include <iostream>
using namespace std;

int main()
 {
 	
    double voltage, totalVoltage = 0, averageVoltage;

    for (int i = 1; i <= 10; i++) {
        cout << "Enter voltage reading " << i << " (V): ";
        cin >> voltage;

        totalVoltage += voltage;
    }

    averageVoltage = totalVoltage / 10;

    cout << "Average Voltage = "
         << averageVoltage << " V" << endl;

    return 0;
}
