#include <iostream>
#include <cstdlib>

int main(int args, char* argv[])
{   
    std::cout << "Environment values:" << std::endl;
    const char* env_name = "MODE";
    const char* env_val = std::getenv(env_name);
    if (env_val){
        std::cout << env_name << "=" << env_val << std::endl;
    }else {
        std::cout << env_name << " not found" << std::endl;
    }
    
    for(size_t i = 0; i < args; i++){
        std::cout << "Argument " << i <<": " << argv[i] << '\n';
    }
}