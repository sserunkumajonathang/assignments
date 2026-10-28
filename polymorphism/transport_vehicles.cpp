#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void move() {
        cout << "Vehicle is moving" << endl;
    }
    virtual ~Vehicle() {} // Correctly includes virtual destructor
};

class Car : public Vehicle {
private:
    int seats;
public:
    Car(int s) : seats(s) {}
    
    void move() override {
        cout << "Car is driving on the road" << endl;
    }
};

class Motorcycle : public Vehicle {
private:
    string engineSize;
public:
    Motorcycle(string e) : engineSize(e) {}
    
    void move() override {
        cout << "Motorcycle is riding on the road" << endl;
    }
};

int main() {
    Vehicle* v; // base-class pointer
    Car car(4);
    Motorcycle bike("250cc");

    v = &car;
    v->move();  // Calls Car::move()
    
    v = &bike;
    v->move();  // Calls Motorcycle::move()
    
    return 0;
}