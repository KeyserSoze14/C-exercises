#include <iostream>
#include <cstring>
using namespace std;
main(){
	int a;
	bool condition;
	bool test;
	cout << "Enter a value for A: ";
	cin >> a;
	if(a>25){
		do{
		cout << "Invalid entry\nRetry\n";
		cout << "Enter a value for A: ";
		cin >> a;
			if(a>25){
			condition = true;
			}
			else{
			condition = false;
			}
		}while(condition);
	}
	
	else{
		cout << "Loop exited!\n";
	}
	return 0;
}
	
