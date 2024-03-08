#include <iostream>
using namespace std;
int fac(int a){
	int c = 1;
	for (int b= 2; b <= a; ++b){
		c *= b;
	}
	return c;
}
int main(){
	int num;
	cout << "Enter the number : ";
	cin  >> num;
	
	cout << "foctorial of " << num << " is :" << fac(num);
	return 0;  
}
