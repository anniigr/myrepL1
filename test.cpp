#include <iostream>

#include "strings.hpp"
#include "vectors.hpp"
#include <vector>
void print_vec(std::vector<int>* vec) {
    std::cout << "{";

    for (int i = 0; i < (int)vec->size() - 1; ++i) {
        std::cout << (*vec)[i] << ", ";
    }

    if (vec->size() > 0) {
        std::cout << (*vec)[vec->size() - 1] << "}" << std::endl;
    } else {
        std::cout << "}" << std::endl;
    }
}

int main() {
    std::vector<int> a ;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.push_back(4);
    
    //std::vector<int> a = {1, 2, 3, 4, 5, 4}; 
    std::vector<int> rev = vectors::reverse(&a);
    std::vector<int> empty;

    std::cout << "vector: ";
    print_vec(&a);
    std::cout << "reversed: ";
    print_vec(&rev);
    rev = vectors::reverse(&empty);
    std::cout << "reversed empty: ";
    print_vec(&rev);
    std::cout << "max: " << vectors::max(&a) << std::endl;

    std::cout << "COMBINE_COUNT: " << strings::COMBINE_COUNT << std::endl;
    std::cout << "Combining abc and efg: " << strings::combine_strings("abc", "efg") << std::endl;
    std::cout << "COMBINE_COUNT: " << strings::COMBINE_COUNT << std::endl;
}