#include <iostream>
using namespace std;

int main() {
    
    int num1, num2;

    cout << "Enter the first value: " << endl;
    cin >> num1;
    cout << "Enter the second value: " << endl;
    cin >> num2;

    num1 += num2;
    cout << "num1 += num2: " << num1 << endl;

    num1 -= num2;
    cout << "num1 -= num2: " << num1 << endl;

    num1 *= num2;
    cout << "num1 *= num2: " << num1 << endl;

    num1 /= num2;
    cout << "num1 /= num2: " << num1 << endl;

    num1 %= num2;
    cout << "num1 %= num2: " << num1 << endl;

    return 0;
}

