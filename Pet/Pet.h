#pragma once
#include <iostream>
using namespace std;
class Pet
{
public:
	Pet();
	Pet(const Pet& ob1);
	Pet(int age, int fleas, int tail, int paws, char* name);
	Pet(int paws, char* voice, char* name);
	~Pet();
protected:
	int age_ = 0,
		fleas_ = 0,
		paws_ = 4,
		tail_ = 0;
	char* name_{"          "};
public:
	virtual void print();
	virtual void voice();
	friend ostream& operator<<(ostream& out, const Pet& ob1);
};

