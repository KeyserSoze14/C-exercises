#include <iostream>
using namespace std;
int main (){
	int b;
	int *ptr = &b;
	cout << "Enter a value : ";
	cin >> b;
	cout << "Value entered is : " << *ptr;
	return 0;
}
