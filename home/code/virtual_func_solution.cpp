// Example solution for Shape inheritance
#include <assert.h>
#include <cmath>

// TODO: Define pi
#define PI 3.14159;

// TODO: Define the abstract class Shape
class Shape {
public:
  // Define public virtual functions Area() and Perimeter()
  // Append the declarations with = 0 to specify pure virtual functions
  virtual double Area() const = 0;
  virtual double Perimeter() const = 0;
};

// TODO: Define Rectangle to inherit publicly from Shape
class Rectangle : public Shape {
public:
  // TODO: Declare public constructor
  Rectangle(double w, double h) {
    Rectangle::width_ = w;
    Rectangle::height_ = h;
  }
  // TODO: Override virtual base class functions Area() and Perimeter()
  double Area() const override { return width_ * height_; }
  double Perimeter() const override { return 2 * (width_ + height_); }

private:
  // TODO: Declare private attributes width and height
  double width_;
  double height_;
};

// TODO: Define Circle to inherit from Shape
class Circle : public Shape {
public:
  // TODO: Declare public constructor
  Circle(double r) { radius_ = r; }
  // TODO: Override virtual base class functions Area() and Perimeter()
  double Area() const override { return pow(radius_, 2) * PI; }
  double Perimeter() const override { return 2 * radius_ * PI; }

private:
  // TODO: Declare private member variable radius
  double radius_;
};

// Test in main()
int main() {
  double epsilon = 0.1; // useful for floating point equality

  // Test circle
  Circle circle(12.31);
  assert(abs(circle.Perimeter() - 77.35) < epsilon);
  assert(abs(circle.Area() - 476.06) < epsilon);

  // Test rectangle
  Rectangle rectangle(10, 6);
  assert(rectangle.Perimeter() == 32);
  assert(rectangle.Area() == 60);
}