#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Animal.h"
#include "Zoo.h"
using namespace std;

Animal* createRandomAnimal() {
	int type = 0;
	type = rand() % 8;

	switch (type)
	{
	case 0: return new Dog();
		break;
	case 1: return new Cat();
		break;
	case 2: return new Cow();
		break;
	case 3: return new Wolf();
		break;
	case 4: return new Duck();
		break;
	case 5: return new Mouse();
		break;
	case 6: return new Sheep();
		break;
	case 7: return new Chicken();
		break;
	default:
		break;

	};
}

int main()
{
	// �ʼ����
	// Animal Ÿ���� ������ �迭�� ������ Dog, Cat, Cow�� ���ҷ� ����
	Animal* myAnimal[] = {
		new Dog(),
		new Cat(),
		new Cow()
	};

	// Animal �迭�� �ݺ������� ��ȸ�ϸ鼭 �� ������ �����Ҹ��� ���� ��
	for (int i = 0; i < sizeof(myAnimal) / sizeof(myAnimal[0]); i++) {
		myAnimal[i]->makeSound();
	}

	// delete �����ڸ� �̿��� �޸� ����
	for (int i = 0; i < sizeof(myAnimal) / sizeof(myAnimal[0]); i++) {
		delete myAnimal[i];
	}

	srand((unsigned int)time(NULL));
	int numberOfAnimals = 0;
	cout << "Enter the number of animals you want in your zoo." << endl;
	cout << "(Up to 10 animals)" << endl;
	cin >> numberOfAnimals;
	Zoo* zoo = new Zoo();

	if (numberOfAnimals <= 0) {
		cout << "Check the number of animals you want in your zoo." << endl;
		cout << "(Too little. There must be more than one.)" << endl;
	}
	else if (numberOfAnimals > 10) {
		cout << "Check the number of animals you want in your zoo." << endl;
		cout << "(Up to 10 animals)" << endl;
	}
	else if (numberOfAnimals <= 10) {
		for (int i = 0; i < numberOfAnimals; i++)
		{
			zoo->addAnimal(createRandomAnimal());
		}
		zoo->performActions();

		zoo->~Zoo();
	}


	return 0;
}