#include <iostream>
using namespace std;

int main() 
{
	
    float gpa;

    cout << "Enter GPA: ";
    cin >> gpa;

    if (gpa >= 3.5) {
        cout << "Eligible for engineering scholarship." << endl;
    }
    else {
        cout << "Not eligible for engineering scholarship." << endl;
    }

    return 0;
}
