#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char name[50];
	int selection;
	cout << "Enter name please\n";
	cin >> name;
	cout <<endl;
	cout << "Hello "<<name<<"!\n";
	cout<<endl;
		
	do{
	cout<< "Please select one : \n\n";
	cout << "=====MENU=====\n";
	
	cout << "1. Add two integers\n";
	cout << "2. Add two strings\n";
	cout << "3. Compute factorial of an integer <!>\n";
	cout << "4. Reverse a string\n";
	cout << "Q. Quit Program\n";
	cout << "===============\n";
	
	cout << "Selection : ";
	cin >> selection;
	cout << endl;
	
	int count;
	switch (selection){
		case 1:
			int i,j;
			cout << "Enter two integers\n";
			cout << "Integer 1 : ";
			cin >> i;
			cout << "Integer 2 : ";
			cin >> j;
			cout << "\n";
			cout << "The sum is "<< i+j<<endl;
			cout << "\n";
			break;
		case 2:
			char string1[50];
			char string2[50];
			cout << "Enter 2 strings  <max 10 chars>\n";
			cout << "String 1 : ";
			cin >> string1;
			cout << endl;
			cout << "String 2 : ";
			cin >> string2;
			cout << endl;
			cout << strcat(string1,string2);
			cout << endl;
			break;
			
		case 3:
			int p,q;
			count = 1;
			cout << "Enter a positive integer\n";
			cin >> p;
			for(q=0; q<p; q++){
				count *=(q+1);
			}
			cout << p << "! = "<<count;
			cout<<"\n\n";
			break;
		
		case 4:
			char string3[50];
			int num;
			cout << "Enter a string to be reversed  <max 10 chars>\n";
			cin >> string3;
			cout <<endl;
			cout << "Reversed string : ";
			for(num = strlen(string3); num >=0; num--){
				cout << string3[num];
			}
			cout << "\n\n";
			break;
			
		default:
			goto exit;
		}

	}while (selection > 0 || selection <5);
	
	exit :
		cout << "Program Quitting \n";
	
	return 0;	
}
