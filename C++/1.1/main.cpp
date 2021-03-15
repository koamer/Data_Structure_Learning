#include <iostream>
#include "static_array.hpp"

int main(void) {
    starr::static_array<int, 10000> array;
    for(int i = 0; i < 10000; i++) {
        array.append(i);
    }
    std::cout << array.getSize() << std::endl;
    std::cout << array.getLength() << std::endl;
    std::cout << array;
    return 0;
}