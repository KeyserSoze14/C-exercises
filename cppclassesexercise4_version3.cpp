#include <iostream>
using namespace std;

class Complex{
	double real, imag;
	public:
		double getReal();
		double getImag();
		void set_number (double r, double i);
};

void Complex :: set_number (double r, double i){
	real = r;
	imag = i;
}

double Complex :: getReal(){
	return real;
}
double Complex :: getImag(){
	return imag;
}


main(){
	double re1, re2, img1, img2;
	double real_addition, imaginary_addition;
	Complex c_num1, c_num2;
		
	cout << "Enter a number for real part of Number A : ";
	cin >> re1;
	cout << "Enter a number for imaginary part of Number A : ";
	cin >> img1;
	cout << "Enter a number for real part of Number B : ";
	cin >> re2;
	cout << "Enter a number for imaginary part of Number B : ";
	cin >> img2;
	
	//Using member functions for the class objects
	c_num1.set_number(re1, img1);
	c_num2.set_number(re2, img2);
	
	real_addition = c_num1.getReal() + c_num2.getReal();
	imaginary_addition = c_num2.getImag() + c_num1.getImag();
	
	cout << "Real part : " << real_addition << endl;
	cout << "Imaginary part : " << imaginary_addition << endl;
	return 0;
}
