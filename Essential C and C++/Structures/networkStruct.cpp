#include <iostream>
#include <string>

struct NetworkDevice {
    std::string type;
    std::string ipAdress;
    int port;
};
int main() {
    NetworkDevice device1 = {"Router","192.168.1.1",4};
    std::cout << "Device type is: " << device1.type << std::endl;
    std::cout << "Device IP adress is: " << device1.ipAdress << std::endl;
    std::cout << "Device port is: " << device1.port << std::endl;
    
    return 0;
}