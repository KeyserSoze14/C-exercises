#include <iostream>
using namespace std;
class Complex{
	double real, imag;
	double magnitude;
	double addition();
	double subtraction();
	public:
		Complex();
		Complex(double r1, double i1);
		void set_value(double r, double i);
		void get_magnitude();
		double get_real();
		double get_imag();
		double magnitude;
		double addition();
		double subtraction();
		
};
Complex::Complex(){
	real = 0;
	imag = 0;
}
Complex:Complex(double r1, double i1){
	real = r1;
	imag = i1
}
void set_value(){
	real = r;
	imag = i;
}
double Complex::get_imag(){
	return imag;
}
double Complex::get_real(){
	return real;
}
double addition(){
	
}
double Compelx::magnitude(){
	double modulus = sqrt((real*real)+(imag*imag));
	return modulus;
}
