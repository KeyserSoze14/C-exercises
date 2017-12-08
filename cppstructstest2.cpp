#include <iostream>
#include <cstring>
using namespace std;

struct Book{
	char title[50];
	char author[50];
	double price;
	
};
void printbook(struct Book book);

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
	printbook(book1);
	
	cout << "Book2 specs :\n";
	printbook(book2);
	
	return 0;
}

void printbook(struct Book book){
	cout << book.title<<endl;
	cout << book.author<<endl;
	cout <<book.price<<endl;
	cout << strcat(book.title, "TEST");
	cout << endl;
	cout <<endl;
}
