#include <iostream>
using namespace std;
int main(){
	int num1,num2,num3;
	
	cout << "Enter the first number :" << endl;
	cin  >> num1;
	cout << "Enter the second number :" << endl;
	cin  >> num2;
	cout << "Enter the third number :" << endl;
	cin  >> num3;
	
	if((num1 > num2) && (num1 > num3)){
		cout << "The greatest value is" << num1;
	}
	else if ((num2 > num1) && (num2 > num3)){
		cout << "The greatest value is " << num2;
	}
	else{
		cout << "The greatest value is " << num3;
	}
	return 0;
}

