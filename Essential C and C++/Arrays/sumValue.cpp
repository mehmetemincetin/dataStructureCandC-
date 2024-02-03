#include <iostream>

int main() {
    int numbers[5] = {10 ,20, 30, 40, 50};
    int sum = 0;

    for(int i; i < (sizeof(numbers) / sizeof(numbers[0])); ++i) {
        sum += numbers[i];
    }
    std::cout<<"Sum of the numbers: "<<sum<<std::endl;

    return 0;
}