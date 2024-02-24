#include <iostream>
//#include <string>
using namespace std;
int main(){
	system ("color F0");
	string s1,s2;
	
	cout << "Enter the first string" <<endl;
	cin  >> s1;
	cout << "Enter the second string" <<endl;
	cin  >> s2;
	
	if (s1 == s2){
		cout << "both are equal" ;
	}
	else{
		cout << "both are not equal";
	}
	return 0;
}

