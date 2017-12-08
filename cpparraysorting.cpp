#include <iostream>
using namespace std;
void sorting(int[], int);
main(){
	int array1[20];
	cout << "Input 10 integers into an array, to be sorted into ascending order\n";
	for(int i=0; i<5; i++){
		cout << "Number [" <<i+1<< "] : ";
		cin >> array1[i];
	}
	sorting(array1, 5);//(sizeof(array1)/sizeof(array1[0]))); 
	return 0;
}
void sorting(int array[], int size){
	int array2[20];
	for(int i=0;i<size;i++){
		array2[i] = array[i];
		//cout << array2[i] << " ";
	}
	for(int i=0; i<size; i++){
		for(int j=(i+1); j<size; j++){
			if(array2[i] > array2[j]){
				int temp = array2[i];
				array2[i] = array2[j];
				array2[j] = temp;
			}
		}
	}
	for(int i=0; i<size; i++){
		cout << array2[i] << " ";
	}
	cout << endl;
}
	
