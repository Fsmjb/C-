#include <iostream>
using namespace std;

int main() {
system ("color F0");
    float F, C, K;

    cout << "Enter the temperature in Fahrenheit: " <<endl;
    cin >> F;

    C = (F - 32) / 1.8;
    K = C + 273; 

    cout << "The temperature in Celsius: " << C << endl;
    cout << "The temperature in Kelvin: " << K << endl;

    return 0;
}

