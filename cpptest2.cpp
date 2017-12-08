#include <iostream>
using namespace std;
int maxvalue (int array[50], int total){
	int max = 0;
	for (int i=0; i< total; i++){
		if(array[i]>array[i+1]){
			max = array[i];
		}
	}
	cout << "The maximum value is : " << max;
}

int main(){
	int array1[50];
	int total1;
	cout << "How many data values? : ";
	cin >> total1;
	for (int i=0; i<total1; i++){
		cout << "Number ["<<i+1<<"] : ";
		cin >> array1[i];
	}
	maxvalue(array1, total1);
	return 0;
}

