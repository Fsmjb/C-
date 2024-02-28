#include <iostream>
using namespace std;
int main(){
	system ("color F0");
	int a, b;
	cout << "Enter the number from which start" <<endl;
	cin  >> a;
	cout << "Enter the number on which end" << endl; 
	cin  >> b;
	
	while(a<=b){
		cout << a << endl;
		++a;
	}
	return 0;
}
