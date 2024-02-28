#include <iostream>
#include <string>
using namespace std;
int main(){
	string s1, s2, result;
	cout << "Enter the first text" << endl;
	getline(cin,s1);
	cout << "Enter the second text" <<endl;
	getline(cin,s2);
	
	result = s1 == s2 ?"both are equal": "both are not equal";
	cout << result;
	return 0;
}
