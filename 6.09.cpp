#include <iostream>
using namespace std;
int main(){
	int num_1, num_2, result;
	cout << "Enter the first number  : ";
	cin  >> num_1;
	cout << "Enter the second number  : ";
	cin  >> num_2;
	result = (num_1 > num_2) ? num_1 : num_2;
	// ternary operator
	cout << "The greater one is : " << result;
	return 0;
}
