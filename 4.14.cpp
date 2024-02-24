#include <iostream>
using namespace std;
int main(){
	system ("color F0");
	int a,b,c;
	
	cout << "Enter a number" <<endl;
	cin  >> a;
	
	b = ((a+34)/2)%4;
	c = (b+4)*5;
	
	cout <<"Result  " <<c;
	
	return 0; 
}
