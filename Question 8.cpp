#include <iostream>
using namespace std;

int main()
 {
 	
    double current;
    int safeCount = 0, unsafeCount = 0;

    for (int i = 1; i <= 8; i++) {
        cout << "Enter current reading " << i << " (A): ";
        cin >> current;

        if (current <= 10) {
            safeCount++;
        } else {
            unsafeCount++;
        }
    }

    cout << "\nSafe Readings: " << safeCount << endl;
    cout << "Unsafe Readings: " << unsafeCount << endl;

    return 0;
}
