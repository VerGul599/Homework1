#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>

class Appliance
{
private:
    std::string name;
    std::string brand;
    double price;
    std::string description;

public:
    Appliance(const std::string& name, const std::string& brand, double price, const std::string& description)
        : name(name), brand(brand), price(price), description(description) {}

    const std::string& getName() const
    {
        return name;
    }

    const std::string& getBrand() const
    {
        return brand;
    }

    double getPrice() const 
    {
        return price;
    }

    const std::string& getDescription() const
    {
        return description;
    }

    void setName(const std::string& newName)
    {
        name = newName;
    }

    void setBrand(const std::string& newBrand)
    {
        brand = newBrand;
    }

    void setPrice(double newPrice) 
    {
        price = newPrice;
    }

    void setDescription(const std::string& newDescription)
    {
        description = newDescription;
    }

    void printInfo() const 
    {
        std::cout << "Название: " << name << "\n";
        std::cout << "Бренд: " << brand << "\n";
        std::cout << "Цена: $" << price << "\n";
        std::cout << "Описание: " << description << "\n" << "\n";
    }
};

int main()
{
    setlocale(LC_ALL, "");
    std::vector<Appliance> appliances;

    Appliance refrigerator("Холодильник", "LG", 799.99, "Современный, классный холодильник с полезными функциями.");
    Appliance oven("Плита", "GE", 499.99, "Стильная, нержавеющяя стальная плита с антипригарным режимом.");
    Appliance dishwasher("Посудомоечная машина", "Bosch", 649.99, "Тихая, эффективная посудомоечная машина с множеством режимов мойки.");

    appliances.push_back(refrigerator);
    appliances.push_back(oven);
    appliances.push_back(dishwasher);

    for (const auto& appliance : appliances) 
    {
        appliance.printInfo();
    }

    return 0;
}
