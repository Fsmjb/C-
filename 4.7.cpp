#include <iostream>
#include <limits>
using namespace std;
int main(){
	system ("color F0");
	int x, sec, min, hou ,a;
	cout << "Enter the seconds :" << endl;
	cin  >> x;
	hou = x/3600; // getting hour from input
	a   = x%3600; // remain from hour
	min = a/60;   // Get minuter from ther remaining
	sec = a%60;   // the the remaining from min is 
	
	
	cout << "your answer is :" <<endl;
	cout <<hou <<" hour " <<min << " minute " <<sec <<" secounds";
	
	 cout << "Press Enter to exit..." << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Wait for user input
	return 0;
}
