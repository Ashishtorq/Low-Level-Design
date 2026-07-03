#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating\n";
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Woof!\n";
    }
};

class cat : public Animal{

    public : 

    void meow(){
        cout << "meow";
    }
}
int main(){

    return 0;
}

// cat is animal
// dog is a animal;