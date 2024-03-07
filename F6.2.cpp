#include <iostream>
#include <math.h> // this for power funciont
using namespace std;

int power(int a, int b){
	int c = pow(a,b);
	return c;
}
int main(){
	int num1, num2;
	cout << "Enter the base number : ";
	cin  >> num1;
	cout << "Enter the exponent number : ";
	cin  >> num2;
	cout << power(num1, num2); // direct print result
	return 0;
}
