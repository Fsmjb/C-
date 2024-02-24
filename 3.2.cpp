#include <iostream>
using namespace std;
int main(){
	system ("color F0");
	int a,b,c,d,e,sum,ave;
	
	cout << " Enter the age of first student" << endl;
	cin >> a;
	
	cout << " Enter the age of second student" << endl;
	cin >> b;
	
	cout << " Enter the age of third student"  << endl;
	cin >> c;
	
	cout << " Enter the age of forth student" << endl;
	cin >> d;
	
	cout << " Enter the age of fifth student" << endl;
	cin >> e;		
	
	sum = a+b+c+d+e;
	ave = sum/5;
	
	cout << " The average age of five students is :  " <<ave;
	
	return 0;
}
