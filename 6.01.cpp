#include <iostream>
using namespace std;
int main(){
system ("color F0");
int a ,b, max;
cout << "Enter the fist number" << endl;
cin  >> a;
cout << "Enter the second number" << endl;
cin  >> b;

max = a > b? a:b; 
cout << "maximum value is :" << max;
	return 0;
}
