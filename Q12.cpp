#include <iostream>
using namespace std;

int main() 
{
	
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if ((num % 2 != 0) && (num % 3 == 0))
        cout << num << " is odd and divisible by 3.";
    else
        cout << num << " does not satisfy the condition.";

    return 0;
}
