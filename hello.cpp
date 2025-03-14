
#include "hello.hpp"
int HELLO_COUNT =0;

void hello :: print(std::string name){
    HELLO_COUNT++;
    std:: cout<<HELLO_COUNT<<" Hello "<< name<<"\n";
}