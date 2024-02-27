#include <iostream>
using namespace std;
int main(){
	system ("color F0");
	int a;
	
	cout << "Enter a number" <<endl ;
	cin >> a;
	if ((a > 10) && (a<=20))
	{
		cout << 1;
	}
	else {
		cout << 0;
	}
	return 0;
}

