#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;
string Student_id(int);
bool condition;
main(){
	cout << "Please enter any non-zero, positive integer (<999999) : ";
	int input_value;
	cin >> input_value;
	
	if(input_value > 999999 || input_value == 000000){ 
		do{
		cout << "Invalid entry \n";
		cout << "Please enter any non-zero, positive integer (<999999) : ";
		cin >> input_value;
			if(input_value < 999999 || input_value != 000000){
				condition = false;
			}
			else{
				condition = true;
			}
		}while(condition);
	}
	
	cout << "\nYour student ID in full is: ";
	cout << Student_id(input_value) << endl;
	return 0;
}
string Student_id(int value){
	ostringstream convert;
	convert << value;
	string ID_num = convert.str();
	const int length = ID_num.length();
	
	string string1 = "UNIMKL-00000";
	string string2 = "UNIMKL-0000";
	string string3 = "UNIMKL-000";
	string string4 = "UNIMKL-00";
	string string5 = "UNIMKL-0";
	string string6 = "UNIMKL-";
	string new_string;
	if(length == 1){
		new_string = string1.append(ID_num);
	}
	if(length == 2){
		new_string = string2.append(ID_num);
	}
	if(length == 3){
		new_string = string3.append(ID_num);
	}
	if(length == 4){
		new_string = string4.append(ID_num);
	}
	if(length == 5){
		new_string = string5.append(ID_num);
	}
	if(length == 6){
		new_string = string6.append(ID_num);
	}
	return new_string;
}

