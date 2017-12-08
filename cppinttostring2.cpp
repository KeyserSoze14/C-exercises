#include <iostream>
#include <cstring>
#include <sstream>		//this header file contains the built-in functions for the conversiont of INT to String
using namespace std;

int student (int num) {
	string zeros1 = "UNIMKL - 00000";
	string zeros2 = "UNIMKL - 0000";
	string zeros3 = "UNIMKL - 000";
	string zeros4 = "UNIMKL - 00";
	string zeros5 = "UNIMKL - 0";
	string zeros6 = "UNIMKL - ";
	
	string ID;
	
	ostringstream convert;
	
	convert << num;
	
	ID = convert.str();
	int x = ID.length();

	if(x >0 && x < 2){
		cout << "Student ID is : " << zeros1.append(ID) << endl;		
	}
	else if(x > 1 && x < 3){
		cout << "Student ID is : " << zeros2.append(ID) << endl;
	}
	else if (x > 2 && x < 4){
		cout << "Student ID is : " << zeros3.append(ID) << endl;
	}
	else if (x >3 && x < 5){
		cout << "Student ID is : " << zeros4.append(ID) << endl;
	}
	else if (x>4 && x<6){
		cout << "Student ID is : " << zeros5.append(ID) << endl;
	}
	else{
		cout << "Student ID is : " <<zeros6.append(ID)  << endl;
	}

//cout << endl << x;	
}

main(){
	int num1;
	cout << "Key in student number : ";
	cin >> num1;
	student(num1);
	return 0;
}
