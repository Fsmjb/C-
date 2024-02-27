#include <iostream>
using namespace std;
int main(){
	int fahad_age, khurram_age; // decleare variable
	
	cout << "Enter the aga of Fahad  : ";
	cin  >> fahad_age;  // take value of fahad
	cout << "Enter the age of Khurram   : ";
	cin  >> khurram_age;  // take value of khurram
	
	if ((fahad_age > 0 ) && (khurram_age > 0)){ // Nested if
		if (fahad_age > khurram_age){  // check aga 
			cout << "Fahad is adult";
		}
		if (fahad_age == khurram_age){
			cout << "Both hava sama age";
		}
		if (fahad_age < khurram_age){
			cout << "Khurram is adult";
		}
	}
	return 0;
}
