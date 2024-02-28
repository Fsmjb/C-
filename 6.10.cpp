#include <iostream>
using namespace std;
int main(){ // print the table upto 12
	int y, num = 5;
	for (int x = 1; x <= 12; x++){
		y = x * num;
		cout << num << " x " << x << " = " << y << endl;
	}
	return 0;
}
