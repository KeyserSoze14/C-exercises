#include <iostream>
#include <iomanip>
using namespace std;

class Dimensions{
	double x, y;
	public:
		double AreaRectangle (double, double);
		Dimensions();
		~Dimensions();
};

double Dimensions :: AreaRectangle (double l1, double w1){
	return (l1 * w1);
}

Dimensions :: Dimensions(){x=0.0; y=0.0;}
Dimensions :: ~Dimensions(){}

main(){
	Dimensions Rectangle;
	cout << fixed << setprecision(2) << Rectangle.AreaRectangle(3.625, 7.084) << endl;
	return 0;
}

