#include <iostream>
#include <cstring>
using namespace std;
// the base class
class Animal{
	protected:
		//protected members, inaccessible from main()
		string name;
		int age;
	public:
		Animal(string name0, int age0):name(name0), age(age0){}
		Animal(){}
		void set_Name(string name1){
			name = name1;
		}
		void set_Age(int age1){
			age = age1;
		}
		string get_Name(){
			return name;
		}
		int get_Age(){
			return age;
		}
		//use of virtual because we will want to override the function in the derived classes
		virtual void speak(){
			cout << "Random Animal Noise\n";
		}
		virtual void action(){}
		void Birthday(){
			age++;
			cout << "Happy Birthday!\n";
		}
		void Introduce(){
			cout << "Hello my name is " << name << " and I am " << age << " years old\n";
		}
};
//ALL Derived classes from here on
class Dog:public Animal{
	public:
		Dog(string name2, int age2):Animal(name2, age2){}
		Dog(){}
		//use of virtual here overrides base class' function
		virtual void speak(){
			cout << "Bark\n";
		}
};
class Cat:public Animal{
	public:
	Cat(string name3, int age3):Animal(name3, age3){}
	Cat(){}
	virtual void speak(){
		cout << "Meow\n";
	}
};
class PetDog:public Dog{
	public:
	PetDog(string name4, int age4):Dog(name4, age4){}	//constructor type1
	PetDog(){}						//constructor type2_default constructor
	virtual void speak(){
		cout << "Bark tamely\n";
	}
	virtual void action(){
		cout << "Fetch a stick\n";
	}
};
class StrayDog:public Dog{
	public:
	StrayDog(string name5, int age5):Dog(name5, age5){}
	StrayDog(){}
	//below function will override it corresponding virtual function in the base class..why?
	// because the virtual functions force the system to process it during run time (late binding)
	virtual void speak(){
		cout << "Woof woof\n";
	}
	virtual void action(){
		cout << "Chase cars\n";
	}
};
main(){
	Animal array[7];
	Dog Object0;
	PetDog Object1;
	StrayDog Object2;
	Cat Object3;
	Animal Object4;
	Cat Object5;
	StrayDog Object6;
	
	array[0] = Object0;
	array[1] = Object1;
	array[2] = Object2;
	array[3] = Object3;
	array[4] = Object4;
	array[5] = Object5;
	array[6] = Object6;
	for(int i=0; i<7; i++){
		array[i].speak();
	}
	return 0;
}
//We have used encapsulation for the classes with public: & protected:
