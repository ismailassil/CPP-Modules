#include <iostream>

class Base {
	public:
		virtual ~Base() { }
};

class A : public Base {

};

class B : public Base {

};

class Animal {
	public:
		virtual ~Animal() {}
};

class Dog : public Animal {};
class Cat : public Animal {};

int main (void) {

	double b = 5.0;
	int a = 12;
	int* d = &a;

	int c = static_cast<int>(b);
	int* e = static_cast<int*>(d);
	int* r = static_cast<int*>(&a);

	std::cout << c << std::endl;
	std::cout << *e << std::endl;
	std::cout << *r << std::endl;

	A* eee = new A();

	Base* aaa = static_cast<A*>(eee);

	Base* base = new Base();
	A* aa = dynamic_cast<A*>(base);
	if (!aa) {
		std::cout << "hhhhhh";
	}

	Animal* pet = new Dog();
	Dog* dogPtr = dynamic_cast<Dog*>(pet);

	if (dogPtr) {
		// pet is actually a Dog
	} else {
		// pet is not a Dog
	}


}