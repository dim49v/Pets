#pragma once
#include "Pet.h"
class Dog :
	public Pet
{
public:
	Dog();
	Dog(const Dog& ob1);
	Dog(int age, int fleas, int tail, char* name);
	~Dog();
	virtual void voice();
};

