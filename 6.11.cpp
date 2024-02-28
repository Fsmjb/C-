#include <iostream>
using namespace std;
int main(){ // factorial of a number
	int num, result = 1;
	cout << "Enter the number : ";
	cin  >> num;
	while (num > 0){
		result *= num;
		--num;
	}
	cout << "The factorial of given number is :  " << result;
	return 0;
}
