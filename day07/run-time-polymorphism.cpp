#include<iostream>
using namespace std;
class Base {
    public:
    void showBase(){
        cout<<"base member  function called"<<endl;
    }

};
class Derived : public Base {
    public:
    void showBase(){
        cout<<"derived member function called"<<endl;
        // syntax:  base-class-name:: member-function
        Base::showBase(); // calling base class function using the scope resolution operator
    }
};
class Animal{
    public:
    void makeSound(){
        cout<<"Animal makes sound"<<endl;
    }
};
class Dog: public Animal {
    public:
    void makeSound(){
        cout<<"Dog barks"<<endl;
        Animal::makeSound(); // calling base class function using the scope resolution operator
        cout<<"Dog is a type of Animal"<<endl;
    }
};
class Cat: public Animal {
    public:
    void makeSound(){
        cout<<"Cat meows"<<endl;
    }
};
int main() {    


    Derived d1;
    d1.showBase();
    Dog dog1;
    dog1.makeSound();
    Cat cat1;
    cat1.makeSound();
}
