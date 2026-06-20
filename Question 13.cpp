#include <iostream>
using namespace std;

int main() {
    double voltage;

    for (int i = 1; i <= 10; i++) {
        cout << "Enter battery voltage reading " << i << ": ";
        cin >> voltage;

        if (voltage < 10.5) {
            cout << "Low battery detected. Test stopped." << endl;
            break; // Immediately terminates the loop
        } else {
            cout << "Battery voltage normal." << endl;
        }
    }

    return 0;
}
