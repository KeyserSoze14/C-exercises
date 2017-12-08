#include <iostream>
using namespace std;

int add (int* a){
	//cout << "Old B value is : " << a;
	//cout << endl;
	*a+=2;
}

main(){
	int b = 3;
	add(&b);
	cout << "New B value is now : " << b;
	cout << endl;
	return 0;
}
