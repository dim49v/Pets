#include "Cat.h"


Cat::Cat() :Pet(4, "Mau", "")
{
}
Cat::Cat(const Cat& ob1) : Pet(ob1)
{
}
Cat::Cat(int age, int fleas, int tail, char* name) : Pet(age, fleas, tail, 4, name)
{
}

Cat::~Cat()
{
}

void Cat::voice(){
	cout << "Mau" << endl;
}
