#include <iostream>
using namespace std;

class Addition{
	public:
		double num1, num2;
		double n1, n2;
		Addition (double num1, double num2){
			n1 = num1;
			n2 = num2;
		}
		double add_function (){
			return (n1 + n2);
		}
};

main(){
	Addition set_num(2.365, 4.521);
	cout << "Addition is : " << set_num.add_function() << endl;
	return 0;
}
