// Example solution for Rectangle and Square friend classes
#include <assert.h>

// Declare class Rectangle


// Define class Square as friend of Rectangle

// Add public constructor to Square, initialize side
    // Add friend class Rectangle

    // Add private attribute side

// Define class Rectangle
    // Add public function to Rectangle: Area()
    
    // Add private attributes width, height;

// Define a Rectangle constructor that takes a Square

// Define Area() to compute area of Rectangle

// Update main() to pass the tests
int main()
{
    Square square(4);
    Rectangle rectangle(square);
    assert(rectangle.Area() == 16); 
}
