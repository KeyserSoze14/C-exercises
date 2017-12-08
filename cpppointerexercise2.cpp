#include <iostream>
using namespace std;

int maxfunction (int *array , int number){	
	int max = *array;
	for (int i=0; i< number; i++){	
//	int max = *array;	[Cannot declare within fucntion, because limited to only the scope of the function, and is not globally declared]
		if(max < *(array + i)){
		max = *(array + i);
		}
	}
	cout << "The max value is : " << max;
}

int main (){
	int a, array1[50];
	cout << "How many data values? : ";
	cin >> a;
	for(int i=0; i<a; i++){
		cout << "Number [" << i+1 << "] : ";
		cin >> array1[i];
	}
	maxfunction(array1, a);
	return 0;
}
