#include <iostream>
#include <string>

struct Character {
        std::string name;
        int damage;
        int health;
    }; 
int main() {
    
    Character character1 = {"Hero",50,100};
    std::cout << "Name is: " << character1.name << std::endl;
    std::cout << "Damage is: " << character1.damage << std::endl;
    std::cout << "health is: " << character1.health << std::endl;
    
    return 0;
}