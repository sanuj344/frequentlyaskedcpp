🔸 1. Compile-time Polymorphism

👉 (Static binding)

Function Overloading
Operator Overloading

//code



#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Math m;

    cout << m.add(2, 3) << endl;      // 5
    cout << m.add(2, 3, 4) << endl;   // 9

    return 0;
}



🔸 2. Runtime Polymorphism

👉 (Dynamic binding)

Function Overriding
Virtual functions


//code



#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes sound\n";
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks\n";
    }
};

int main() {
    Animal* a;
    Dog d;

    a = &d;
    a->sound();  // Dog ka function call hoga

    return 0;
}
