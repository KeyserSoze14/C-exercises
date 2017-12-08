#include <iostream>
using namespace std;

struct coordinates {
	int x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6;
};

int main(){
	struct coordinates animal;
	animal.x1 = 1;
	animal.y1 = 1;
	animal.x2 = 2;
	animal.y2 = 2;
	animal.x3 = 2;
	animal.y3 = 3;
	animal.x4 = 3;
	animal.y4 = 4;
	animal.x5 = 4;
	animal.y5 = 3;
	animal.x6 = 4;
	animal.y6 = 2;
	
	cout <<"1"<< ":\t<"<<animal.x1<<","<<animal.y1<<">\n";
	cout <<"2"<< ":\t<"<<animal.x2<<","<<animal.y2<<">\n";
	cout <<"3"<< ":\t<"<<animal.x3<<","<<animal.y3<<">\n";
	cout <<"4"<< ":\t<"<<animal.x4<<","<<animal.y4<<">\n";
	cout <<"5"<< ":\t<"<<animal.x5<<","<<animal.y5<<">\n";
	cout <<"6"<< ":\t<"<<animal.x6<<","<<animal.y6<<">\n";

/*	cout <<"<"<<animal.x2<<" , "<<animal.y2<<">\n";
	cout <<"<"<<animal.x3<<" , "<<animal.y3<<">\n";
	cout <<"<"<<animal.x4<<" , "<<animal.y4<<">\n";
	cout <<"<"<<animal.x5<<" , "<<animal.y5<<">\n";
	cout <<"<"<<animal.x6<<" , "<<animal.y6<<">\n";
*/	
	return 0;
}

