#include <iostream>
using namespace std;
int main(){
	system ("color F0");
	int n1, n2, d1, d2;
	
	cout << "Enter the Numerator 1" << endl;
	cin  >> n1;
	cout << "Enter the Denumerator 1" <<endl;
	cin  >>  d1;
	cout << "Enter the Numerator 2" << endl;
	cin  >> n2;
	cout << "Enter the Denumerator 2" <<endl;
	cin  >> d2;
	
	cout <<n1 <<"/" << d1 <<"+" <<n2 <<"/"<<d2 <<"\t" << (n1/d1)+(n2/d2) << endl;
	cout <<n1 <<"/" << d1 <<"-" <<n2 <<"/"<<d2 <<"\t" << (n1/d1)-(n2/d2) << endl;
	cout <<n1 <<"/" << d1 <<"x" <<n2 <<"/"<<d2 <<"\t" << (n1/d1)*(n2/d2) << endl;
	cout <<n1 <<"/" << d1 <<"/" <<n2 <<"/"<<d2 <<"\t" << (n1/d1)/(n2/d2) << endl;
	 return 0;
}
