#include <iostream>
using namespace std;

class student{
	double marks1, marks2;
	public:
		char *name;
		double set_marks(double m1, double m2);
		void disp();
		double calc_media();
};

double student :: set_marks (double m1, double m2){
	marks1 = m1;
	marks2 = m2;
}
double student :: calc_media(){
	return marks1 + marks2;
}
void student :: disp(){
	cout << "Name is : " << name << endl;
	cout << "Total marks is : " << calc_media() << endl;
}

main(){
	char name1[50];
	double mark1, mark2;
	student Person1;
	cout << "What is your name? : ";
	cin >> name1;
	cout << endl;
	cout << "Mark 1 : ";
	cin >>mark1;
	cout << endl;
	cout << "Mark 2 : ";
	cin >> mark2;
	cout << endl;
	
	Person1.name = name1;
	Person1.set_marks(mark1, mark2);
	Person1.calc_media();
	Person1.disp();
	
	cout << endl;
}
