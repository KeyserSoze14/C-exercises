#include <iostream>
using namespace std;

class Complex{
	double real, imag;
	double real_addition, imag_addition;
	double *number;
	public:
		double setValue(double r, double i);
		double getReal ();
		double getImaginary ();
		void additionResult (double *num);
};

double Complex :: setValue (double r, double i){
	real = r;
	imag = i;
}
double Complex :: getReal(){
	return real;
}
double Complex :: getImaginary(){
	return imag;
}
void Complex :: additionResult (Complex *number){
	real_addition = (*number).getReal() + (*(number+1)).getReal();
	imag_addition = (*number).getImaginary() + (*(number+1)).getImaginary();
	
	cout << "The result of the addition of the two complex numbers is : " << real_addition << " + i" << imag_addition << endl;	
}

main(){
	double real1, real2, imag1, imag2;
	Complex Num_array[2];
	
	Complex c_num1;
	cout << "Real part first number = ";
	cin >> real1;
	cout << "Imaginary part second number = ";
	cin >> imag1;
	c_num1.setValue(real1, imag1);
	
	Complex c_num2;
	cout << "Real part second number = ";
	cin >> real2;
	cout << "Imaginary part second number = ";
	cin >> imag2;
	c_num2.setValue(real2, imag2);
	
	Num_array[0] = c_num1;
	Num_array[1] = c_num2;
	
	cout << "The result of the addition is : ";
	cout << c_num1.additionResult(Num_array);
	
	return 0; 
}
