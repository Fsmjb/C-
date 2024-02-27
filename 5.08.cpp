#include <iostream>
using namespace std;
int main(){
	char ch;
	cout << "Enter the character  : ";
	cin  >> ch; // get character
	
	if (ch >= 'a' && ch <= 'z'){ // check the value is vilid & lower case
		if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ){
			cout << "Character is vowel & lower case"; // check it is vowel 
		}
		else{ // other vise it is consonant
			cout << "Character is consonant & lower case";
		}
	}
	else if (ch >= 'A' && ch <= 'Z'){ // chech the value is vilid & upper case
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ){
			cout << "Character is vowel & upper case"; // check it is vowel or not
		}
		else{
			cout << "Character is consonant & upper case";
		}
	}
	else{ // if not vilid it show not vilid character
		cout << "Please enter the vilid character";
	}
}
