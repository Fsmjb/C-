#include <iostream>
using namespace std;

int area_sq(int s){
	return s*s;
}
int par_sq (int s){
	return s *4;
}
int area_rec(int l, int w){
	return l * w;
}
int par_rec(int l, int w){
	return 2 * l + 2 * w;
}
int main(){
	int square_len, rec_lan, rec_wid;
	
	cout << "Enter the lenth of area : ";
	cin  >>  square_len;
	cout << "Enter the height of rectangle : ";
	cin  >> rec_lan;
	cout << "Enter the width of rectangle : ";
	cin  >> rec_wid;
	
	cout << "Area of square is : " << area_sq(square_len) << endl;
	cout << "Perimeter of square is : " << par_sq(square_len) << endl;
	cout << "Area of rectangle is : " << area_rec(rec_lan, rec_wid) << endl;
	cout << "Perimeter of rectangle is : " << par_rec(rec_lan, rec_wid) << endl;
	
	return 0; 
}
