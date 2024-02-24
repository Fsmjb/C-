#include <iostream>
using namespace std;

float area(float a){
	return 3.1415*a *a;
}
int main(){
	float rad, result;
	
	cout << "Enter the value of radius : ";
	cin  >> rad;
	
	result = area(rad);
	cout << "The result is :  " << result ;
}
