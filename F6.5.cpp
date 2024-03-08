#include <iostream>
using namespace std;

int max(){
	int num_1, num_2, max;
	cout << "Enter first number \n" ;
	cin  >> num_1;
	cout << "Enter second number \n" ;
	cin  >> num_2;
	
	if (num_1 > num_2){
		max = num_1;
	}
	else{
		max = num_2;
	}
	return max;
}
int main(){
	cout << "Maximum value is : " << max();
	return 0;
}
