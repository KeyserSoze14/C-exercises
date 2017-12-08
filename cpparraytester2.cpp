#include <iostream>
using namespace std;
int main (){
	int array[50] ;
	cout << "Input 5 numbers to be put into an array\n";
	for(int i=0; i <5; i++){
		cout << "Number [" << i+1 << "] : ";
		cin >> array[i];
	}
//	array = array * 2;
	cout << "Value of the data is now\n";
	for (int i=0; i<5; i++){
		array[i] = array[i] * 2;
		cout << array[i] << "\t";
	}
	return 0;
}
