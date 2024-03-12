#include <iostream>
using namespace std;
int main(){
	int a, b;
	cout << "Enter the number from which start" <<endl;
	cin  >> a;
	cout << "Enter the number on which end" << endl; 
	cin  >> b;
	
	if (a%2 != 0 ){
		++a;
	}
	
	while(a<=b){
		cout << a << endl;
		++a;
		++a;
	}
	return 0;
}
