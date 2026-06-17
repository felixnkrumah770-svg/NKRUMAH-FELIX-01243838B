#include <iostream>
#include <string>
using namespace std;

int binaryToDecimal(string binary) {
    int decimal = 0;

    for (int i = 0; i < binary.length(); i++) {
        decimal = decimal * 2 + (binary[i] - '0');
    }

    return decimal;
}

int main() 
{
	
    string binary;
    int choice;

    cout << "Binary Conversion Calculator\n";
    cout << "1. Binary to Decimal\n";
    cout << "2. Binary to Hexadecimal\n";
    cout << "3. Binary to Octal\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = binaryToDecimal(binary);

    switch (choice) {
        case 1:
            cout << "Decimal = " << decimal;
            break;

        case 2:
            cout << "Hexadecimal = " << hex << uppercase << decimal;
            break;

        case 3:
            cout << "Octal = " << oct << decimal;
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}
