#include <iostream>
using namespace std;
void midpoint (double *x, double *x1, double *y, double *y1){
	double midp1, midp2;
	midp1 = (*x1 + *x) / (double)2;
	midp2 = (*y1 + *y) / (double) 2;
	cout << endl;
	cout << "("<<midp1<< ", "<<midp2<< ")";
}

int main (){
	double h1,h2,v1,v2;
	cout << "Input coordinates, can be doubles, to find out the midpoint\n";
	cout << "Value of x1 = ";
	cin >> h1;
	cout << "Value of y1 = ";
	cin >> v1;
	cout << "Value of x2 = ";
	cin >> h2;
	cout << "Value of y2 = ";
	cin >> v2;
	midpoint (&h1, &h2, &v1, &v2);
	//return 0;
}

