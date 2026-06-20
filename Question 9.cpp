#include <iostream>
using namespace std;

int main()
 {
 	
    double current;

    cout << "Enter current reading (A): ";
    cin >> current;

    while (current <= 10) {
        cout << "Safe current reading: "
             << current << " A" << endl;

        cout << "Enter current reading (A): ";
        cin >> current;
    }

    cout << "Overcurrent detected. Monitoring stopped."
         << endl;

    return 0;
}
