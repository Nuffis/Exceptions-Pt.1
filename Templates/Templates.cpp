//Landon Dunkerly
//CIS 1202
//12/2/23

#include <iostream>
#include <cmath>
template <typename T>
T half(T value) {
    if (std::is_floating_point<T>::value) {
        return value / 2;
    }
    else if (std::is_integral<T>::value) {
        return (value + 1) / 2;
    }
    else {
        std::cerr << "Unsupported data type" << std::endl;
        return value;
    }
}

int main() {
    std::cout << "half(3): " << half(3) << std::endl;       
    std::cout << "half(5.0): " << half(5.0) << std::endl;    
    std::cout << "half(7.5): " << half(7.5) << std::endl;          
    std::cout << "half(10.8): " << half(10.8) << std::endl;         
    std::cout << "half(15.7): " << half(15.7) << std::endl;     
    std::cout << "half(25): " << half(25) << std::endl;          
    std::cout << "half(30): " << half(30) << std::endl;           
    std::cout << "half('a'): " << half('a') << std::endl;           

    return 0;
}