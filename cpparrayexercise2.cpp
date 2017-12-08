#include <iostream>
using namespace std;
void function (int index, int array[1],int number){	//Why does the int array[2] and int array[100] yield the same result?
	for(int u= 6; u > index; u--){	
		array[u] = array [u-1];		//why use u-1? Because if used u+1, would be iterating the values.
	}								// eg. array [n+2] = array[n+1] will take value of array [n] BECAUSE array[n+1] = array[n]
array[index] = number;
	for (int a=0; a<7; a++){
		cout << array[a] << " ";
	}
}

int main (){
	int i , j , array1 [6] = {1, 2, 3, 4, 5, 6};
	cout << "Enter a number : ";
	cin >> i;
	cout << "Enter an index : ";
	cin >> j;
	function(j, array1, i);
	return 0;
}
