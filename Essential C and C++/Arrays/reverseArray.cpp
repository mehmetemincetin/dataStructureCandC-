#include <iostream>
int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    
    for(int i = (sizeof(numbers) / sizeof(numbers[0])) -1; i >= 0; --i){
        
        std::cout<<i<<".index = "<<numbers[i]<<" ";
    }
    
    return 0;
}