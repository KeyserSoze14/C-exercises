#include <iostream>
using namespace std;
 void printarray (const int[][3]);
 const int rows = 2;
 const int columns = 3;
 main(){
	int array1[rows][columns]={{1,2,3},{4,5,6}};
 	printarray(array1);
 	return 0;
 }
 void printarray (const int a[][columns]){
 	for(int i=0; i<rows; ++i){
 		for(int j=0; j<columns; ++j){
 			cout << a[i][j];
		 }
	cout << endl;
	 }
 }
