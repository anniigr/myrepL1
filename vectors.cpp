#include "vectors.hpp"
namespace vectors{
std::vector<int> reverse(std::vector<int>* old){
    std::vector<int> neww;
    if(old->empty())return neww;
    for(int i=old->size()-1;i>=0 ;i--){
        neww.push_back((*old)[i]);
    }
    return neww;
} 
int max(std::vector<int>* vec) {
    if (vec->empty()) {
        throw std::invalid_argument("Empty vector!");
    }
    return *std::max_element(vec->begin(), vec->end());
}
}