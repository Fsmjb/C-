#include <iostream>
using namespace std;
int main(){
	system ("color F0");
	int result = 0, num;
	
	for (int x = 1; x <= 10; x++)
	{
		cout << "Enter the number  :  " ;
		cin  >> num;
		
		if ( num < 0){
			break;
		}
		
		result += num;
	}
	cout <<  "The total sum is " <<result;
	
	return 0;
}
