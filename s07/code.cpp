#include <iostream>
#include <string>

int main(int args, char* argv[])
{   
    for(size_t i = 0; i < args; i++){
        std::cout << argv[i] << '\t';
    }
    std::cout << std::endl;
}