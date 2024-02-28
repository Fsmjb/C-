#include <iostream>
using namespace std;
int main(){ // write number in reverse order
	int num;
	cout << "Enter the number : ";
	cin  >> num;
	
	while(num > 0){
		cout << num << endl;
		--num;
	}
	return 0;
}
