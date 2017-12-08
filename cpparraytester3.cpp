#include <iostream>
using namespace std;
int average (int array[50], int total){
int sum =0;
for (int i = 0; i<total; i++){
	sum += array[i];
}
float avg = sum / (double)total;
cout << "The average value is : "<< avg;
return avg;
}

int main (){
	int array1[50];
	int total1;
	cout << "How many integer values ?\n";
	cin >> total1;
	int i=0;
	while (i < total1){
		cout << "Number ["<<i+1<<"] : ";
		cin >> array1[i];
		++i;
	}
	average(array1, total1);
	return 0;
}
