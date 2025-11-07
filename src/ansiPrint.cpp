#include "ansiPrint.hpp"
#include <string>
#include <iostream>

namespace  ANSI{

    void print(std::string string){
        std::cout << string;
    };

    void println(std::string string){
        std::cout << string << '\n';
    };

    void reset(){
        std::cout << "\033[m";
    };
};
