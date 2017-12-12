#pragma once
#include "Pet.h"
class Cat :
	public Pet
{
public:
	Cat();
	Cat(const Cat& ob1);
	Cat(int age, int fleas, int tail, char* name);
	~Cat();
	virtual void voice();
};

