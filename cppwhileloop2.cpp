#include <iostream>
using std::cout;
using std::cin;
using std::endl;

double getTipPercentage(double total);

int main(){

int total;
bool exit=false;

do{
cout<<"Enter total bill to calculate tip: ";
cin>>total;
cout<<"\nTotal :"<<total<<'\n'
	<<"Tip: "<<getTipPercentage(total)<<endl;
cout<<"Do you want to try again? (0 zero to exit 1 continue)";
cin>>exit;
}while(exit);

return 0; //indicates success
}//end main

double getTipPercentage(double total){
	double tip;
		tip=total*0.20;
return tip;
}//end function getTipPercentage 
