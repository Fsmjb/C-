#include <iostream>
using namespace std;
int main(){
	system ("color F0");
	char c;
	
	cout << "Enter a  single character :" << endl;
	cin  >> c;
	
	cout << "previous character :" << --c;
	return 0;
}
