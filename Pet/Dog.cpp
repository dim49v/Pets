#include "Dog.h"


Dog::Dog() :Pet(4, "Gav", "")
{
}
Dog::Dog(const Dog& ob1) : Pet(ob1)
{
}
Dog::Dog(int age, int fleas, int tail, char* name) : Pet(age, fleas, tail, 4, name)
{
}

Dog::~Dog()
{
}
void Dog::voice(){
	cout << "Gav" << endl;
}