#include <iostream>

int main() {

    int size;
    std::cout<<"Enter array size:";
    std::cin>>size;

    int* dynamicArray = new int[size];
    for(int i = 0; i < size; ++i) {
        dynamicArray[i] = i * 2;
    } 
    for(int i = 0; i < size; ++i) {
        std::cout << dynamicArray[i] << " ";
    }
    delete[] dynamicArray;
    return 0;
}