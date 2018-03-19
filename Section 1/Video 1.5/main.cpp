#include <iostream>
#include <string>

class Vehicle
{
protected:
    size_t mNoOfWheels;
    std::string mVehicleName;
    void SetWheels(const size_t& wheels)
    {
        mNoOfWheels = wheels;
    }
    void SetVehicleName(const std::string& name)
    {
        mVehicleName = name;
    }
public:
    Vehicle()
    {
        SetVehicleName("Unknown");
        SetWheels(0);
    }
    const size_t& GetWheels() const
    {
        return mNoOfWheels;
    }
    const std::string& GetVehicleName() const
    {
        return mVehicleName;
    }
};

class Car : public Vehicle
{
public:
    Car(const size_t& wheels, const std::string& name)
    {
        SetVehicleName(name);
        SetWheels(wheels);
    }
};

class Truck : public Vehicle
{
public:
    Truck(const size_t& wheels, const std::string& name)
    {
        SetVehicleName(name);
        SetWheels(wheels);
    }
};

int main()
{
    Car mycar(4, "merc");
    Truck mytruck(6, "volvotruck");
    std::cout << mycar.GetVehicleName() << std::endl;
    std::cout << mytruck.GetWheels() << std::endl;
    return 0;
}
