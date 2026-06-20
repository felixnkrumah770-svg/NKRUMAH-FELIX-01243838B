#include <iostream>
using namespace std;

int main()
 {
 	
    double voltage;

    cout << "Enter voltage reading (V): ";
    cin >> voltage;

    if (voltage < 0) {
        cout << "Invalid voltage reading" << endl;
    }
    else if (voltage <= 50) {
        cout << "Low voltage" << endl;
    }
    else if (voltage <= 240) {
        cout << "Normal voltage" << endl;
    }
    else if (voltage <= 415) {
        cout << "High voltage" << endl;
    }
    else {
        cout << "Dangerous voltage" << endl;
    }

    return 0;
}
