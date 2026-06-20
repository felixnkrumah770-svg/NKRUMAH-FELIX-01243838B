#include <iostream>
using namespace std;

int main()
 {
 	
    int choice;

    cout << "ELECTRICAL COMPONENT MENU" << endl;
    cout << "1. Resistor" << endl;
    cout << "2. Capacitor" << endl;
    cout << "3. Diode" << endl;
    cout << "4. Transistor" << endl;
    cout << "5. LED" << endl;

    cout << "\nEnter your choice (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Resistor: Used to limit current in a circuit." << endl;
            break;

        case 2:
            cout << "Capacitor: Used to store electrical energy." << endl;
            break;

        case 3:
            cout << "Diode: Allows current to flow in one direction only." << endl;
            break;

        case 4:
            cout << "Transistor: Used for switching and amplification." << endl;
            break;

        case 5:
            cout << "LED: Emits light when current flows through it." << endl;
            break;

        default:
            cout << "Invalid selection." << endl;
    }

    return 0;
}
