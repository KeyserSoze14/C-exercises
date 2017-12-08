#include <iostream>
using namespace std;
int display (int *ptrA , int *ptrB){
	cout << "Numbers are : \n";
	cout << *ptrA << " Stored in address : " <<ptrA << "\n" << *ptrB << " Stored in address : " << ptrB;
}
int main(){
	int a, b;
	cout << "Key in two integers : \n";
	cout << "First : ";
	cin >>  a;
	cout << "Second :";
	cin >>  b;
	display (&a , &b);
	return 0;
}
