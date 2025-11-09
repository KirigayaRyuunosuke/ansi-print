#pragma once

#include <string>

namespace ANSI{
    void reset();

    void print(std::string = "");
    void println(std::string = "");

    void print(std::string, int [], int);
    void println(std::string, int [], int);

    enum class Color{
        black,
        red,
        green,
        yellow,
        blue,
        purple,
        cyan,
        gray,
        lblack,
        lred,
        lgreen,
        lyellow,
        lblue,
        lpurple,
        lcyan,
        lgray
    };

    enum class mode{
        reset,
        bold,
        faint,
        italic,
        underline,
        blink,
        rapidBlink,
        // clear,
        BGColor,
        FontColor
    };

    void printColor(std::string, Color);
    void printColorln(std::string, Color);

    void printBlink(std::string);
    void printBlinkln(std::string);

    void printMulti(std::string, mode[], int, Color = Color::lgray, Color = Color::black);
    void printMultiln(std::string, mode[], int, Color = Color::lgray, Color = Color::black);

    void printWarn(std::string);
    void printErr(std::string);

}
