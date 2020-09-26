// Example solution for runtime polymorphism
// include iostream for printing
#include <iostream>
// Define class Base
class Base
{
    // Declare an empty public constructor
    // Define virtual Print() function
    // Define non-virtual Calc() function
    public:
        Base() {}
        virtual void Print() {
            std::cout << "Print from Base Class" << "\n";
        }

        void Calc() {
            std::cout << "Calc from Base Class" << "\n";
        }
};
// Define subclass Derived that publicly inherits from Base
class Derived: public Base
{
    // Declare an empty public constructor
    // Define print() function
    // Define calc() function
    public:
        Derived() {}
        void Print() {
            std::cout << "Print from Derived Class" << "\n";
        }

    void Calc()
    {
        std::cout << "Calc from Derived Class" << "\n";
    }
};

// Test in main()
int main()
{
    Base *base_ptr;
    Derived derived;
    base_ptr = &derived;

    //virtual function, binded at runtime (Runtime polymorphism)
    base_ptr->Print();

    // Non-virtual function, binded at compile time
    base_ptr->Calc();

}