#include <iostream>
#include <thread>

class Vehicle
{
public:
    Vehicle() : _id(0) {}
    void addID(int id) { _id = id; }
    void setName(std::string name) { _name = name; }
    void printID()
    {
        std::cout << "Vehicle ID=" << _id << std::endl;
    }
    void printName()
    {
        std::cout << "Vehicle name=" << _name << std::endl;
    }

private:
    int _id;
    std::string _name;
};

int main()
{
    // create thread 1
    std::shared_ptr<Vehicle> v(new Vehicle);
    std::thread t1 = std::thread(&Vehicle::addID, v, 1); 

    // create thread 2
    std::thread t2 = std::thread(&Vehicle::setName, v, "MyVehicle"); 

    // wait for thread to finish
    t1.join();
    t2.join();

    // print Vehicle id
    v->printID();
    v->printName();

    return 0;
}