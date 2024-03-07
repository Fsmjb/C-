#include <iostream>
using namespace std;

void square (){
	int s = 5;
	
	cout << "The area of square is : " << s * s << endl;
	cout << "The perimeter of square is : " << s * 4 << endl;
}
void rectangle(){
	int l = 5 , w = 4;
	
	cout << "The area of rectangle is : " << l * w << endl;
	cout << "The perimeter of rectangle is : " << 2 * l+ 2 * w << endl;
}
int main(){
	square();
	rectangle();
	
	return 0;
}
