#include "Pet.h"
#include <iostream>
using namespace std;

Pet::Pet() :age_(0), fleas_(0), tail_(0), paws_(4), name_("")
{

}
Pet::Pet(const Pet& ob1) : age_(ob1.age_), fleas_(ob1.fleas_), paws_(ob1.paws_), name_(ob1.name_)
{

}
Pet::Pet(int age, int fleas, int tail, int paws, char* name) : paws_(paws)
{
	try{
		if (age >= 0){
			age_ = age;
		}
		else{
			throw("Invalid age");
		}
		if (fleas >= 0){
			fleas_ = fleas;
		}
		else{
			throw("Invalid fleas");
		}
		if (tail >= 0){
			tail_ = tail;
		}
		else{
			throw("Invalid tail");
		}
		if (strlen(name) <= 10){
			name_ = name;
		}
		else{
			throw("Invalid name");
		}
	}
	catch (char* err){
		cout << err;
	}
}
Pet::Pet(int paws, char* voice, char* name) : paws_(paws)
{
	if (strlen(name) <= 10){
		name_ = name;
	}
	else{
		cout << "Invalid name";
	}
}
Pet::~Pet()
{
}
void Pet::voice()
{
	cout << "---";
}
void Pet::print()
{
	cout << "Name: " << name_ << endl << "Age: " << age_ << endl << "Fleas: " << fleas_ << endl << "Tail: " << tail_ << endl << "Paws: " << paws_ << endl;
}

ostream& operator<<(ostream& out,const Pet& ob1)
{
	out << "Name: " <<ob1.name_ << endl << "Age: " << ob1.age_ << endl << "Fleas: " << ob1.fleas_ << endl << "Tail: " << ob1.tail_ << endl << "Paws: " << ob1.paws_ << endl;
	return out;
}