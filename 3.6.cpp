#include <iostream>
using namespace std;
int main(){
	system ("color F0");
	int       a = 10;
	short int b = 34;		 
	float     c = 4.66;
	double    d = 5.6166;
	bool      e = true;
	char      f = 'c';
	
	cout << "The size of int is "<< sizeof (a) << endl;
	cout << "The size of short int is "<< sizeof (b) << endl;
	cout << "The size of float is "<< sizeof (c) << endl;
	cout << "The size of double is "<< sizeof (d) <<endl;
	cout << "The size of bool is "<< sizeof (e) << endl;
	cout << "The size of char is "<< sizeof (f) << endl;
	return 0;
}
