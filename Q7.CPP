#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double M[2][2], K[2][2];

    cout << "NATURAL FREQUENCY AND MODE SHAPE CALCULATOR\n";
    cout << "===========================================\n";

    cout << "\nEnter 2x2 Mass Matrix M:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> M[i][j];
        }
    }

    cout << "\nEnter 2x2 Stiffness Matrix K:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> K[i][j];
        }
    }

    // Assume diagonal mass matrix
    double a = K[0][0] / M[0][0];
    double b = K[0][1] / M[0][0];
    double c = K[1][0] / M[1][1];
    double d = K[1][1] / M[1][1];

    // Characteristic equation
    double trace = a + d;
    double det = a * d - b * c;

    double lambda1 =
        (trace + sqrt(trace * trace - 4 * det)) / 2.0;

    double lambda2 =
        (trace - sqrt(trace * trace - 4 * det)) / 2.0;

    double omega1 = sqrt(lambda1);
    double omega2 = sqrt(lambda2);

    const double PI = 3.141592653589793;

    double f1 = omega1 / (2 * PI);
    double f2 = omega2 / (2 * PI);

    cout << fixed << setprecision(4);

    cout << "\nRESULTS\n";
    cout << "=========\n";

    cout << "Natural Frequency 1 = "
         << f1 << " Hz\n";

    cout << "Natural Frequency 2 = "
         << f2 << " Hz\n";

    // Mode Shapes
    double mode1_y = -(a - lambda1) / b;
    double mode2_y = -(a - lambda2) / b;

    cout << "\nMode Shape 1:\n";
    cout << "[1, " << mode1_y << "]\n";

    cout << "\nMode Shape 2:\n";
    cout << "[1, " << mode2_y << "]\n";

    return 0;
}
