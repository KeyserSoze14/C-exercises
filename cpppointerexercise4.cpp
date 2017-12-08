#include <iostream>
using namespace std;

char string1 (char *array){
	char letter = *array;
	cout << letter <<"\t" << *array << "\t"<< *(array + 3)<< endl;
	
	array = array +2;	//meaning the new *array now points to the old array position + 2, for each element position
	cout << *array <<"\t"<< *(array + 2) <<"\t"<< *(array + 5);
}

int main(){
	char array1[] = "A string";
	string1(array1);
	return 0;
}
