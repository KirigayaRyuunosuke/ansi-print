#include "ansiPrint.hpp"
#include <string>
#include <iostream>

namespace  ANSI{

    //enum class Color;

    void print(std::string string){
        std::cout << string;
    }

    void println(std::string string){
        print(string);
        std::cout << '\n';
    }

    void reset(){
        std::cout << "\033[m";
    }


    void print(std::string string, int params[], int size){
        std::cout << "\033[";
        for(int i = 0; i < size; i++){
            std::cout << params[i];
            if(i < size - 1)
                std::cout << ";";
        }
        std::cout << "m";

        std::cout << string;
        reset();
    }

    void println(std::string string, int params[], int size){
        print(string, params, size);
        std::cout << '\n';
    }

    void printColor(std::string string, Color color){
        int params[3]{38,5,static_cast<int>(color)};
        print(string, params, 3);
        reset();
    }

    void printColorln(std::string string, Color color){
        printColor(string, color);
        std::cout << '\n';
    }

    void printBlink(std::string string){
        std::cout << "\033[5m" << string;
        reset();
    }

    void printBlinkln(std::string string){
        printBlink(string);
        std::cout << '\n';
    }

    void printMulti(std::string string, mode mode[], int size, Color FG, Color BG){
        std::cout << "\033[";
        for(int i = 0; i < size; i++){
            switch (mode[i]) {
                case mode::reset:
                    std::cout << "0";
                    break;
                case mode::bold:
                    std::cout << "1";
                    break;
                case mode::faint:
                    std::cout << "2";
                    break;
                case mode::italic:
                    std::cout << "3";
                    break;
                case mode::underline:
                    std::cout << "4";
                    break;
                case mode::blink:
                    std::cout << "5";
                    break;
                case mode::rapidBlink:
                    std::cout << "6";
                    break;
                // case mode::clear:
                //     std::cout << "";
                //     break;
                case mode::BGColor:
                    std::cout << "48;5;" << static_cast<int>(BG);
                    break;
                case mode::FontColor:
                    std::cout << "38;5;"<< static_cast<int>(FG);;
                    break;
            }
            if(i < size - 1)
                std::cout << ";";
        }
        std::cout << "m";
        std::cout << string;
        reset();
    }

    void printMultiln(std::string string, mode mode[], int size, Color FG, Color BG){
        printMulti(string, mode, size, FG, BG);
        std::cout << '\n';
    }

    void printWarn(std::string string){
        mode mode[2]{
            mode::bold,
            mode::FontColor
        };
        Color FontColor = Color::yellow;
        printMulti("[Warn] ", mode, 2, FontColor);
        std::cout << string << '\n';
    }

    void printErr(std::string string){
        mode mode[2]{
            mode::bold,
            mode::FontColor
        };
        Color FontColor = Color::red;
        printMulti("[Err] ", mode, 2, FontColor);
        std::cout << string << '\n';
    }
};
