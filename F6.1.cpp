#include <iostream>
using namespace std;
int check(int a){
	if (a % 2 == 0){
		cout << a << " :  is the even number";
	}
	else{
		cout << a << " : is the odd number";
	}
}
int main(){
	int num;
	cout << "Enter the number : ";
	cin  >> num;
	check(num);
	return 0;
}
