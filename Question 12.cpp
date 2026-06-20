#include <iostream>
using namespace std;

int main() {
    int choice;
    double val1, val2, result;

    do {
        cout << "\n--- Electrical Calculator ---\n";
        cout << "1. Calculate Power\n";
        cout << "2. Calculate Resistance\n";
        cout << "3. Calculate Energy\n";
        cout << "4. Exit\n";
        cout << "Enter your option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Voltage and Current: ";
                cin >> val1 >> val2;
                result = val1 * val2;
                cout << "Power = " << result << " W\n";
                break;
            case 2:
                cout << "Enter Voltage and Current: ";
                cin >> val1 >> val2;
                if (val2 != 0) {
                    result = val1 / val2;
                    cout << "Resistance = " << result << " Ohms\n";
                } else cout << "Error: Division by zero.\n";
                break;
            case 3:
                cout << "Enter Power and Time: ";
                cin >> val1 >> val2;
                result = val1 * val2;
                cout << "Energy = " << result << " J\n";
                break;
            case 4:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid option! Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
