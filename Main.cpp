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
	// 필수기능
	// Animal 타입의 포인터 배열을 선언해 Dog, Cat, Cow를 원소로 선언
	Animal* myAnimal[] = {
		new Dog(),
		new Cat(),
		new Cow()
	};

	// Animal 배열을 반복문으로 순회하면서 각 동물의 울음소리를 내게 함
	for (int i = 0; i < sizeof(myAnimal) / sizeof(myAnimal[0]); i++) {
		myAnimal[i]->makeSound();
	}

	// delete 연산자를 이용해 메모리 해제
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