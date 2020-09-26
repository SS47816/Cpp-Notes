// Encapsulation
#include<iostream>

class Encapsulation{
  private:
    // data hidden from outside world
    int x;
  public:  // <- error 1 was here
    // function to set value of  
    // variable x
    void Set(int a) {
      x = a;  // <- error 2 was here
    }

    // function to return value of
    // variable x
    int Get() {
      return x;
    }  // <- error 3 was here
};

// main function
int main(){
  Encapsulation obj;
  obj.Set(5);
  std::cout << obj.Get() << "\n";
}