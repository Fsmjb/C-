#include <iostream>
using namespace std;
int main(){
	int age1, age2;
	
	cout << "Enter the age1 :" << endl;
	cin  >> age1;
	cout << "Enter the age2 :" << endl;
	cin  >> age2;
	
	if ((age1> 0) && (age1 < 120)){
		cout << "age1 if vilad \n";
	}
	if (age1 > 18){
		cout << "adult \n ";
	}
	
		if ((age2> 0) && (age2  < 120)){
		cout << "\n age1 if vilad \n";
	}
	if (age2 > 18){
		cout << "adult \n";
	}
}
