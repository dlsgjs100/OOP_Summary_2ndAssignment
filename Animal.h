#ifndef ANIMAL_H_
#define ANIMAL_H_
#include <iostream>
using namespace std;

// �⺻Ŭ���� : Animal
class Animal {
public:
	// makeSound()��� ���� ���� �Լ��� ����
	virtual void makeSound() = 0;
	virtual void Move() = 0;

	// ���� �Ҹ��ڸ� ����� �Ļ� Ŭ������ �Ҹ��ڵ� ȣ���� �޸� ���� ����
	virtual ~Animal() {}
};
 
class Dog : public Animal {
public:
	// override�� ����� �Ļ� Ŭ�������� ���
	void makeSound() override {
		cout << "Dog barks: Woof! Woof!" << endl;
	}
	void Move() override {
		cout << "Dog is running around." << endl;
	}
};

class Cat : public Animal {
public:
	void makeSound() override {
		cout << "Cat meows: Meow~" << endl;
	}
	void Move() override {
		cout << "Cat is taking a nap." << endl;
	}
};

class Cow : public Animal {
public:
	void makeSound() override {
		cout << "Cow moos: Moo~" << endl;
	}
	void Move() override {
		cout << "Cow is grazing the grass." << endl;
	}
};

class Wolf : public Animal {
public:
	void makeSound() override {
		cout << "Wolf howls: Howl~" << endl;
	}
	void Move() override {
		cout << "Wolf is howling." << endl;
	}
};

class Duck : public Animal {
public:
	void makeSound() override {
		cout << "Duck quacks: Quack! Quack!" << endl;
	}
	void Move() override {
		cout << "Duck is floating on the water." << endl;
	}
};

class Mouse : public Animal {
public:
	void makeSound() override {
		cout << "Mouse squeaks: Squeak! Squeak!" << endl;
	}
	void Move() override {
		cout << "Mouse is drinking water." << endl;
	}
};

class Sheep : public Animal {
public:
	void makeSound() override {
		cout << "Sheep baas: Baa~! Baa~!" << endl;
	}
	void Move() override {
		cout << "Sheep is roaming around." << endl;
	}
};

class Chicken : public Animal {
public:
	void makeSound() override {
		cout << "Chicken clucks: Cluck! Cluck!" << endl;
	}
	void Move() override {
		cout << "Chicken is dozing." << endl;
	}
};

#endif // !ANIMAL_H_
