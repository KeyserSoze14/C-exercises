#include <iostream>
#include <cstring>
using namespace std;

char reversal (char array1[30], int i){
	for (i = strlen(array1); i >= 0; i--){
		cout << array1[i];
	}
	cout << endl;
}

int main(){
	char array[30];
	cout << "Input a string, of < 30 characters\n";
	cin >> array;
	reversal (array , strlen(array));
	return 0;
}
