#include <iostream>
#include <string>

struct Adress {
    std::string street;
    std::string city;
    int postaCode;
};

struct Person {
    std::string name;
    int age;
    Adress personelAdress;
};

int main() {

    Person person1 = {"Semih",34,{"Sitki taranci caddesi","Bagcilar",34600}};
    std::cout << "Name is: " << person1.name << std::endl;
    std::cout << "Age is: " << person1.age << std::endl;
    std::cout << "Street is: " << person1.personelAdress.street << std::endl;
    std::cout << "City is: " << person1.personelAdress.city << std::endl;
    std::cout << "PostaCode is: " << person1.personelAdress.postaCode << std::endl;

    return 0;
}