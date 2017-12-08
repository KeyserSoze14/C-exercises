#include <iostream>
using namespace std;

int swap (int *a, int *b){
	int *c = a;
	a = b;
	b = c;
	cout << "Value of p = " << *a <<endl;
	cout << "Value of q = "<<*b;
}

int main(){
	int p,q;
	cout << "Enter a value for p : ";
	cin >> p;
	cout << "Enter a value for q : ";
	cin >> q;
	swap(&p,&q);
	return 0;
}
