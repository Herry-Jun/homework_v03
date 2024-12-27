#include <iostream>
#include <vector>
using namespace std;

// Animal 클래스 정의
class Animal {
public:
    // 순수 가상 함수 makeSound
    virtual void makeSound() const = 0;

    // 가상 소멸자
    virtual ~Animal() {}
};

// Dog 클래스 정의 (Animal을 상속받음)
class Dog : public Animal {
public:
    void makeSound() const override {
        cout << "멍멍!" << endl;
    }
};

// Cat 클래스 정의 (Animal을 상속받음)
class Cat : public Animal {
public:
    void makeSound() const override {
        cout << "야옹!" << endl;
    }
};

// Cow 클래스 정의 (Animal을 상속받음)
class Cow : public Animal {
public:
    void makeSound() const override {
        cout << "음매!" << endl;
    }
};

// 메인 함수
int main() {
    // Animal 포인터 벡터에 동물 객체들 저장
    vector<Animal*> animals;

    // 동물 객체 동적 할당
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Cow());

    // 반복문을 통해 각 동물의 소리 출력
    for (const Animal* animal : animals) {
        animal->makeSound();  // 동물의 소리 출력
    }

    // 동물 객체들 메모리 해제
    for (Animal* animal : animals) {
        delete animal;
    }

    return 0;
}
