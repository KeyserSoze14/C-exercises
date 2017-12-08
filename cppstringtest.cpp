#include <iostream>
#include <cstring>
using namespace std;
char reversal (int length, char array [30]){
	for (int u = length; u >= 0; u--){
		cout << array [u];
	}
	cout << endl;
}
int main (){
	char string [30];
	cout << "Do enter a string of not more than 30 characters \n";
	cin >> string;	
		
	reversal (strlen(string) , string);
	return 0;
}
