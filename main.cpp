#include "src/ansiPrint.hpp"

int main(){
    ANSI::mode params[3]{
        ANSI::mode::blink,
        ANSI::mode::bold,
        ANSI::mode::underline
    };
    int size = 3;
    //ANSI::println("test",params,size);
    // ANSI::printColorln("test", ANSI::Color::blue);
    ANSI::printMultiln("test", params, 3);
    return 0;
}
