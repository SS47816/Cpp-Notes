// Example solution for Animal class
#include <iostream>
#include <string>

// Define base class Animal
class Animal {
public:
    std::string color;
    std::string name;
    int age;
};

// Declare derived class Snake
class Snake : public Animal {
public:
    int length;
    
    void MakeSound() const
    {
        std::cout << "Hiss\n";
    }
};

// Declare derived class Cat
class Cat : public Animal {
public:
    int height;

    void MakeSound() const
    {
        std::cout << "Meow\n";
    }
};

// Test in main()
int main() {

    Cat cat;
    Snake snake;

    cat.age = 10;
    cat.name = "Lucy";
    cat.MakeSound();
    snake.MakeSound();

    std::cout << cat.age << " " << cat.name << "\n";
}