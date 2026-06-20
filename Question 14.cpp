#include <iostream>
using namespace std;

int main() {
    double temp, sum = 0;
    int count = 0;

    for (int i = 1; i <= 10; i++) {
        cout << "Enter temperature " << i << ": ";
        cin >> temp;

        if (temp < 0) {
            continue; // Skip negative readings
        }

        sum += temp;
        count++;
    }

    if (count > 0) {
        cout << "Average of valid readings: " << sum / count << "°C" << endl;
    } else {
        cout << "No valid readings entered." << endl;
    }

    return 0;
}
