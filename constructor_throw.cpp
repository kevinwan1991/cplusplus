// Example program
#include <iostream>
#include <string>

struct B
{
	B(){ std::cout << "B()" << std::endl; }
	~B(){ std::cout << "~B()" << std::endl; }
};

struct C
{
	C(){ std::cout << "C()" << std::endl; throw std::exception(); }
	~C(){ std::cout << "~C()" << std::endl; }
};

struct A
{
	B b;
	C c;
	A():b(B())
	{
		std::cout << "A()" << std::endl;
		c = C();
		throw std::exception();
	}
	~A(){ std::cout << "~A()" << std::endl; }
};

int main()
{
	try
	{
		A a;
	}
	catch (...)
	{
	}
}
