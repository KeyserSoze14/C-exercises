#include <iostream>
using namespace std;

class Addition{
	public:
		double x, y;
		Addition(double , double);
		~Addition();
};

Addition :: Addition(double x, double y){
	cout << "Addition is : " << x + y << endl;
}
Addition :: ~Addition(){}

main(){
	double a,b;
	cout << "Enter a value for a : ";
	cin >> a;
	cout << "Enter a value for b : ";
	cin >> b;
	Addition Test (a,b);
	return 0;
}
