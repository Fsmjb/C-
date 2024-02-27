#include <iostream>
using namespace std;
int main(){
	int fahad_age, khurram_age;  // decleare variable
	cout << "Enter the age of Fahad  : "; 
	cin  >> fahad_age;  // get value of fahad
	cout << "Enter the age of khurram  : ";
	cin  >> khurram_age;  // get vaue of khurram
	

	if (fahad_age > khurram_age){ // condition of if
		cout << "fahad is adult";
	}
	else{ // if no conditon correct it workd
		cout << "khurram is adult ";
	}
		
	return 0;
}
