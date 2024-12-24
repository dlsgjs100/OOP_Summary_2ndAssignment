#ifndef ZOO_H_
#define ZOO_H_
#include <iostream>
#include "Animal.h"
using namespace std;

class Zoo {
private:

    Animal* animals[10] = {}; // ���� ��ü�� �����ϴ� ������ �迭
    int animalCount = 0;

public:
    // ������ �������� �߰��ϴ� �Լ�
    // - Animal ��ü�� �����͸� �޾� ������ �迭�� �����մϴ�.
    // - ���� �����̶� ���� �� �߰��� �� �ֽ��ϴ�.
    // - �Է� �Ű�����: Animal* (�߰��� ���� ��ü)
    // - ��ȯ��: ����
    void addAnimal(Animal* animal) {
        animals[animalCount] = animal;
        animalCount++;
    }

    // �������� �ִ� ��� ������ �ൿ�� �����ϴ� �Լ�
    // - ��� ���� ��ü�� ���� ���������� �Ҹ��� ���� �����̴� ������ �����մϴ�.
    // - �Է� �Ű�����: ����
    // - ��ȯ��: ����
    void performActions() {
        for (int i = 0; i < animalCount; i++)
        {
            cout << "animal " << "\" " << i + 1 << " \"" << endl;
            animals[i]->makeSound();
            animals[i]->Move();
            cout << "==============================" << endl;
        }
    }

    // Zoo �Ҹ���
    // - Zoo ��ü�� �Ҹ�� ��, ���� ���Ϳ� ����� ��� ���� ��ü�� �޸𸮸� �����մϴ�.
    // - �޸� ������ �����ϱ� ���� ���� �Ҵ�� Animal ��ü�� `delete` �մϴ�.
    // - �Է� �Ű�����: ����
    // - ��ȯ��: ����
    ~Zoo() {
        for (int i = 0; i < animalCount; i++)
        {
            delete animals[i];
        }
    }
};



#endif // !ZOO_H_
