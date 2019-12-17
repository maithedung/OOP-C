#include <bits/stdc++.h>
using namespace std;

class MotorVehicle
{
protected:
    int vin;
    string make;
    string model;

public:
    MotorVehicle(int vin = 101, string make = "Gold", string model = "S1");
    ~MotorVehicle();

    void drive(int speed, int distance);
};

MotorVehicle::MotorVehicle(int vin, string make, string model) : vin(vin), make(make), model(model) {}

MotorVehicle::~MotorVehicle()
{
}

void MotorVehicle::drive(int speed, int distance)
{
    cout << "Dummy drive() of MotorVehicle." << endl;
}

class Motor
{
public:
    Motor() {}
    ~Motor() {}

    void drive(int s, int d)
    {
        cout << "Motor class." << endl;
    }
};

class Car : public MotorVehicle, public Motor
{
private:
    int passengers;

public:
    Car(int vin = 310, string make = "Silver", string model = "V8", int passengers = 41);
    ~Car();

    void Show();
    void drive(int s, int d)
    {
        cout << "Car class." << endl;
    }
};

Car::Car(int vin, string make, string model, int passengers) : MotorVehicle(vin, make, model), passengers(passengers)
{
}

Car::~Car()
{
}

void Car::Show()
{
    cout << this->passengers << endl
         << this->make << endl
         << this->model << endl
         << this->vin;
}

int main()
{
    Car c;
    c.drive(25, 5);
    return 0;
}