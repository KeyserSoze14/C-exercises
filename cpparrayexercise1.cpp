#include <iostream>
using namespace std;
int main(){
	int array[10];
	cout << "Input 10 integer values : \n";
	for(int i =0; i<10; i++){
		cout << "Number ["<< i+1 <<"] :";
		cin >> array[i];
		cout<<endl;
	}
	int j;
	int count = 0;
	cout << "Now, input any random integer :";
	cin >> j;
	cout<<endl;
	for (int i=0; i<10; i++){
	if (j == array[i])
	count++	;		
	}
	
cout << "Number of times: " << count;
return 0;
}
