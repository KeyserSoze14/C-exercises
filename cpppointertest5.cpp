#include <iostream>
using namespace std;

main(){
	int a = 20;
	int *b = &a;
	cout << "Address of *b is : " << b;
	cout << endl;
	cout << "New value of *b is : " << *b + 5;
	return 0;
}
