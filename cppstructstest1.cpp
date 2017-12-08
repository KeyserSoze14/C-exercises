#include <iostream>
#include <cstring>
using namespace std;

struct Book{
	char title[50];
	char author[50];
	double price;
	
};

int main (){
	struct Book book1;
	struct Book book2;
	//Book1 specs
	strcpy(book1.title , "Sukhaporn");
	strcpy(book1.author , "Kumar");
	book1.price = 25.50;
	//Book2 specs
	strcpy(book2.title , "Sex");
	strcpy(book2.author , "Kumar0");
	book2.price = 36.98;
	
	cout << "Book1 specs :\n";
	cout << book1.title<<endl;
	cout << book1.author<<endl;
	cout <<book1.price<<endl;
	cout << "\n";
	
	cout << "Book2 specs :\n";
	cout << book2.title<<endl;
	cout<<book2.author<<endl;
	cout<<book2.price<<endl;
	
	return 0;
}
