#include "pch.h"
#include "A.h"


A::A()
{
	wzrost = 180;
	waga = 66.5;
	z = 5;
}


A::~A()
{
}

A::A(int x, int z, float w)
{
	this->wzrost = x;
	this->z = z;
	this->waga = w;
}
