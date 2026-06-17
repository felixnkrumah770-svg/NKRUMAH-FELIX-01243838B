
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;

    cout << "GAUSSIAN ELIMINATION METHOD\n";
    cout << "Enter the number of equations: ";
    cin >> n;

    double a[20][21];

    cout << "\nEnter the coefficients and constants:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    // Forward Elimination
    for (int i = 0; i < n - 1; i++) {
        for (int k = i + 1; k < n; k++) {
            double factor = a[k][i] / a[i][i];

            for (int j = i; j <= n; j++) {
                a[k][j] = a[k][j] - factor * a[i][j];
            }
        }
    }

    // Back Substitution
    double x[20];

    for (int i = n - 1; i >= 0; i--) {
        x[i] = a[i][n];

        for (int j = i + 1; j < n; j++) {
            x[i] = x[i] - a[i][j] * x[j];
        }

        x[i] = x[i] / a[i][i];
    }

    cout << fixed << setprecision(4);

    cout << "\nSolution:\n";
    for (int i = 0; i < n; i++) {
        cout << "x" << i + 1 << " = " << x[i] << endl;
    }

    return 0;
}
