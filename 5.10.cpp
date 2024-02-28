#include <iostream>
using namespace std;
int main(){
	int quiz, mid, final, total;
	
	cout << "Enter the quiz marks in 10 : ";
	cin  >> quiz;
	cout << "Enter the mid paper marks in 20  : ";
	cin  >> mid;
	cout << "Enter the final paper marks in 70 : ";
	cin   >> final;
	
	total = quiz + mid + final;
	
	if (total >= 95){
		cout << "Grade A+";
	}
	else if( total < 95 && total >= 85){
		cout << "Grade A";
	}
	else if(total < 85 && total >= 75){
		cout << "Grade B";
	}
	else if(total < 75 && total >= 55){
		cout << "Grade C";
	}
	else {
		cout << "Grade F";
	}
}
