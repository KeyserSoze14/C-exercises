#include <iostream>
using namespace std;
int angle (int i, int j, int k){
	if (i+j+k == 180){
		cout << "Angles do add up to 180 degrees.\n";
	}
	else {
		cout << "Invalid angles.\n";
	}
}

int main (){
	cout << "Input any 3 angles to try and make up a triangle.\n";
	int array[3];
	for (int i = 0; i < 3; i++){
		cout << "Angle [" << i+1 <<"] : ";
		cin >> array[i];
	}
	angle (array[0], array[1], array[2]);
	return 0;
}
