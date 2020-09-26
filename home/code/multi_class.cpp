#include <iostream>
#include <string>
#include <assert.h>

class Animal {
public:
    double age;
};

class Pet {
public:
    std::string name;
};

// Dog derives from *both* Animal and Pet
class Dog : public Animal, public Pet {
public:
    std::string breed;
};

int main()
{
    assert(cat.color == "black");
    assert(cat.age == 10);
    assert(cat.name == "Max");
}
