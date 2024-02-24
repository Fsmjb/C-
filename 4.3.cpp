#include<iostream>
using namespace std;

int main() {
	system ("color F0");
    double real1, imag1, real2, imag2, resultReal, resultImag;

    cout << "Enter real  part of first complex number: " <<endl;
    cin  >> real1;
    cout << "Enter imaginary parts of first complex number: " <<endl;
    cin  >> imag1;
    cout << "Enter real parts of second complex number: " <<endl;
    cin  >> real2;
    cout << "Enter imaginary parts  second complex number: " <<endl;
    cin  >> imag2;

    resultReal = real1 + real2;
    resultImag = imag1 + imag2;

    cout << "Sum of the complex numbers: " << resultReal << " + " << resultImag << "i" <<endl;

    return 0;
}

