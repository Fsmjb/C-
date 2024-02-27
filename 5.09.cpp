#include <iostream>
using namespace std;
int main(){
	system ("color F0");
	int tem;
	
	cout << "Enter the temperature in centigrade" <<endl;
	cin  >> tem;
	
	if (tem < 0){
		cout <<  "Freezing weather";
	}
	else if ((tem >0) && (tem < 13)){
		cout << " very cold weather";
	}
	else if ((tem > 12) && (tem < 23)){
		cout << " cold weather";
	}
	else if ((tem > 22) && (tem <33)){
		cout << " Normal temperature";
	}
	else if ((tem >32) && (tem <42)){
		cout << "It's hot";
	}
	else{
		cout << "very hot";
	}
	  // Use a system-specific pause command to keep the console open
    #ifdef _WIN32
        system("pause");
    #else
        cout << "Press enter to continue...";
        cin.ignore();
        cin.get();
    #endif

}

