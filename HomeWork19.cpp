#include <iostream>
#include <string>

class Animal
{
public:
	virtual void Voice() {}
};


class Dog : Animal
{
	
	void Voice() override 
	{
		std::cout << "Woof!" << std::endl;
	}

};

class Cat : Animal
{
	void Voice() override 
	{
		std::cout << "Meow!" << std::endl;
	}

};
class Mouse : Animal
{
	void Voice() override 
	{
		std::cout << "Peee!" << std::endl;
	}

};

int main()
{
	Animal* animals[3];
	Dog dog;
	Cat cat;
	Mouse mouse;
	animals[0] = (Animal*) new Dog;
	animals[1] = (Animal*) new Cat;
	animals[2] = (Animal*) new Mouse;
	for (Animal *a : animals) 
	{
		a->Voice();
	}
}