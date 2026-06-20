#include <iostream>
using namespace std;

int main() {
    double power, totalLoad = 0;

    while (totalLoad <= 3000) {
        cout << "Enter appliance power rating (W): ";
        cin >> power;
        
        if (totalLoad + power > 3000) {
            cout << "Load limit exceeded." << endl;
            break; 
        }
        
        totalLoad += power;
    }

    cout << "Final total load: " << totalLoad << " W" << endl;

    return 0;
}
