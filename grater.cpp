#include <iostream>
using namespace std;

int great(int a, int b){
	int c;
	if (a>b){
		c = a;
	}
	else{
		c = b;
	}
	return c;
}
	int main(){
	int num1, num2;
	cout << "Enter the first number"  << endl;
	cin  >> num1;
	cout << "Enter the Second number"  << endl;
	cin  >> num2;
	
	cout << "The greater one is : " <<great(num1, num2);
	return 0;
	}
	
