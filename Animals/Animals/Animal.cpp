#include <iostream>
#include <vector>
using namespace std;

// Animal Ŭ���� ����
class Animal {
public:
    // ���� ���� �Լ� makeSound
    virtual void makeSound() const = 0;

    // ���� �Ҹ���
    virtual ~Animal() {}
};

// Dog Ŭ���� ���� (Animal�� ��ӹ���)
class Dog : public Animal {
public:
    void makeSound() const override {
        cout << "�۸�!" << endl;
    }
};

// Cat Ŭ���� ���� (Animal�� ��ӹ���)
class Cat : public Animal {
public:
    void makeSound() const override {
        cout << "�߿�!" << endl;
    }
};

// Cow Ŭ���� ���� (Animal�� ��ӹ���)
class Cow : public Animal {
public:
    void makeSound() const override {
        cout << "����!" << endl;
    }
};

// ���� �Լ�
int main() {
    // Animal ������ ���Ϳ� ���� ��ü�� ����
    vector<Animal*> animals;

    // ���� ��ü ���� �Ҵ�
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Cow());

    // �ݺ����� ���� �� ������ �Ҹ� ���
    for (const Animal* animal : animals) {
        animal->makeSound();  // ������ �Ҹ� ���
    }

    // ���� ��ü�� �޸� ����
    for (Animal* animal : animals) {
        delete animal;
    }

    return 0;
}
