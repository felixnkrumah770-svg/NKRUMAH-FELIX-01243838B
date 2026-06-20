#include <iostream>
using namespace std;

int main()
 {
 	
    double resistor, totalResistance = 0;

    for (int i = 1; i <= 5; i++) {
        cout << "Enter resistor " << i << " value (Ohms): ";
        cin >> resistor;

        totalResistance += resistor;
    }

    cout << "Total Resistance = "
         << totalResistance << " Ohms" << endl;

    return 0;
}
