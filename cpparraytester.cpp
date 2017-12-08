#include <iostream>
using namespace std;
int function (int number, int index, int array[30]){
	for (int u = 7; u > index; u--){
		array [u] = array [u-1];
	}
	array [index] = number;
	cout << "The new array is : [";
	for (int u = 0; u < 7; u++){
	cout <<	array [u] << " ";
	}
	cout << "]\n";
}

int main(){
	int number, index;
	cout << "Key in a number : \n";
	cin >>  number;
	cout << "Key in an index : \n";
	cin >> index;
	int array[]={1, 2, 3, 4, 5, 6};
	function (number, index, array);
	return 0;
}
