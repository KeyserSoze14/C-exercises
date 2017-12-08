#include <iostream>
using namespace std;
void print_array(const int [][3]);
const int row = 2;
const int column = 3;
main(){
	int array1[row][column]={{1,2,3}, {4,5,6}};
	print_array(array1);
	return 0;
}
void print_array(const int array[][column]){
	for(int i=0; i<row;i++){
		for(int j=0; j<column; j++){
			cout << array[i][j]<<" ";
		}
	cout << "\n";
	}
}
