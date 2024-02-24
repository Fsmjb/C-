#include <iostream>
using namespace std;

int main() {
	system ("color F0");
    char option;
    int num1, num2, a;
    
    cout << "Enter the operation: ";
    cin >> num1 >> option >> num2;
    
    switch (option) {
        case '+':
            a = num1 + num2;
            break;
       
        case '-':
		    a = num1 - num2;
			break;
		
		case '*':
			a = num1 * num2;
			break;
		
		case '/':
			a = num1 / num2;
			break;
		
		case '%':
			a = num1 % num2;
			break;	
		
		 default:
            cout << "Invalid operation";    
    }
    
    cout << "Result: " << a;
    
    return 0;
}

