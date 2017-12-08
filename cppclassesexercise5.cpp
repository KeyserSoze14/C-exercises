#include<iostream>
using namespace std;
class Complex{
	public:
		Complex();
		Complex(double, double);
		void setValue(double, double);
		void addition(Complex *, Complex *);
		void subtraction(Complex *, Complex *);
		void PrintOut();
		double getReal();
		double getImag();
		~Complex();
	private:
		double real, imaginary;
};
Complex::Complex(){
	real = 0;
	imaginary = 0;
}
Complex::Complex(double r, double i){
	real = r; imaginary = i;
}
Complex::~Complex(){}
void Complex::setValue(double r, double i){
	real = r;
	imaginary = i;
}
void Complex::PrintOut(){
	cout << "The complex number is : "<< real <<"+ j"<<imaginary<<endl;
	cout << "\n";
}
double Complex::getReal(){
	return real;
}
double Complex::getImag(){
	return imaginary;
}
void Complex::addition(Complex *num1, Complex *num2){
	double x,y;
	x = (*num1).getReal()+(*num2).getReal();
	y = (*num1).getImag()+(*num2).getImag();
	cout << "The result of the addition is : " <<x<< "+ j" <<y<<endl;
}
void Complex::subtraction(Complex *num1, Complex *num2){
	double x,y;
	x = (*num1).getReal()-(*num2).getReal();
	y = (*num1).getImag()-(*num2).getImag();
	cout << "The result of the subtraction is : " <<x<< "+ j" <<y<<endl;
}

main(){
	Complex c_num1;
	Complex c_num2(4.2,8.69);
	Complex *pointer1;
	Complex *pointer2;
	pointer1 = &c_num1;
	pointer2 = &c_num2;
	(*pointer1).setValue(20.69, 36.23);
	
	(*pointer1).PrintOut();
	(*pointer2).PrintOut();
	
	(*pointer2).addition(pointer1, pointer2);
	(*pointer1).subtraction(pointer1, pointer2);
	return 0;
}
