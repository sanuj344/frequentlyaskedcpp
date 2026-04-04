// basic syntax


class Child : public Parent {
};


//basic example


#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

int main() {
    Dog d;

    d.eat();   // inherited
    d.bark();  // own method

    return 0;
}




// constructor in inheritance



class A {
public:
    A() { cout << "A constructor\n"; }
};

class B : public A {
public:
    B() { cout << "B constructor\n"; }
};
//output will be
A constructor
B constructor




//vehicle example


class Vehicle {
public:
    void start() {
        cout << "Vehicle starting\n";
    }
};

class Car : public Vehicle {
public:
    void drive() {
        cout << "Car driving\n";
    }
};

class Bike : public Vehicle {
public:
    void ride() {
        cout << "Bike riding\n";
    }
};



//employee system example


👉 Hume design karna hai:

Base class → Employee
Derived classes:
Developer
Manager


👉 Common kya hai sabme?

name
salary
work()

👉 Difference kya hai?

Developer → code likhta hai
Manager → team manage karta hai




//code


#include <iostream>
using namespace std;

// Base class
class Employee {
protected:
    string name;
    int salary;

public:
    Employee(string n, int s) {
        name = n;
        salary = s;
    }

    void display() {
        cout << "Name: " << name << ", Salary: " << salary << endl;
    }

    virtual void work() {
        cout << "Employee working\n";
    }
};

// Derived class: Developer
class Developer : public Employee {
public:
    Developer(string n, int s) : Employee(n, s) {}

    void work() override {
        cout << name << " is writing code\n";
    }
};

// Derived class: Manager
class Manager : public Employee {
public:
    Manager(string n, int s) : Employee(n, s) {}

    void work() override {
        cout << name << " is managing team\n";
    }
};

int main() {
    Employee* e;

    Developer dev("Sanuj", 50000);
    Manager mgr("Rahul", 80000);

    e = &dev;
    e->display();
    e->work();

    e = &mgr;
    e->display();
    e->work();

    return 0;
}

