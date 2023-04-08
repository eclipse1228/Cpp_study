#include <iostream>
using namespace std;

class Animal {
public:
	virtual void speak() {
		cout << "Animal speaks" << endl;
	}
};

class Dog : public Animal {
public:
	void speak() override {
		cout << "Dog barks" << endl;
	}
};

int main()
{
	Animal* pAnimal = new Animal();
	Dog* pDog = new Dog();

	pAnimal->speak();
	pDog->speak();

	delete pAnimal;
	delete pDog;

	return 0;
}
