#include <iostream>
using namespace std;

int display(int *ptrA,int *ptrB){
	cout << *ptrA <<endl;
	cout << *ptrB;	
}	

int main(){
	int a,b;
	cout << "Input an integer for 'a' : ";
	cin >> a;
	cout << "Input an integer for 'b' : ";
	cin >> b;
	display(&a, &b);
	return 0;
}
