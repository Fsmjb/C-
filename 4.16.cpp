#include <iostream>
#include <string>
using namespace std;

int main() {
	system ("color F0");
    string s1, s2;

    cout << "Enter the first string :" << endl;
    getline(cin, s1);
    cout << "Enter the second string :" << endl;
    getline(cin, s2);

    cout << "The string s1 is: " << s1 << endl;
    cout << "The string s2 is: " << s2 << endl;
    cout << "The length of string s1 is: " << s1.length() << endl;
    cout << "The length of string s2 is: " << s2.length() << endl;
    cout << "s1 + s2: " << s1 +"  "+ s2 << endl;
    cout << "The character at index 2 of string s1 is: " << s1[2] << endl;
    cout << "The character at index 6 of string s2 is: " << s2[6] << endl;

    return 0;
}

