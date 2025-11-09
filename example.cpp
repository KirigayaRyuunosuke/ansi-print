#include "src/ansiPrint.hpp"

int main(){
    ANSI::printColorln("Example program", ANSI::Color::lyellow);

    ANSI::printColorln("\
ANSI::mode params[3]{\
\n\tANSI::mode::blink\
\n\tANSI::mode::bold,\
\n\tANSI::mode::underline\
\n};\
\nint size = 3\
\nANSI::printMultiln(\"Multiple params\", params, size)", ANSI::Color::lblue);
{
    ANSI::mode params[3]{
        ANSI::mode::blink,
        ANSI::mode::bold,
        ANSI::mode::underline
    };
    int size = 3;
    ANSI::printMultiln("Multiple params", params, size);
}
    ANSI::println();

    ANSI::printColorln("\
ANSI::mode params[3]{\
\n\tANSI::mode::bold\
\n\tANSI::mode::FontColor,\
\n\tANSI::mode::BGColor\
\n};\
\nint size = 3\
\nANSI::printMultiln(\"Change color and background\", params, size, ANSI::Color::black, ANSI::Color::green);", ANSI::Color::lblue);
{
    ANSI::mode params[3]{
        ANSI::mode::bold,
        ANSI::mode::FontColor,
        ANSI::mode::BGColor
    };
    int size = 3;
    ANSI::printMultiln("Change color and background", params, size, ANSI::Color::black, ANSI::Color::green);
}
    ANSI::println();

    ANSI::printColorln("ANSI::printColorln(\"Text in color\", ANSI::Color::lred);", ANSI::Color::lblue);
    ANSI::printColorln("Text in color", ANSI::Color::lred);

    ANSI::println();

    ANSI::printColorln("ANSI::printWarn(\"Warning 1\");", ANSI::Color::lblue);
    ANSI::printWarn("Warning 1");

    ANSI::println();

    ANSI::printColorln("ANSI::printErr(\"Error 1\");", ANSI::Color::lblue);
    ANSI::printErr("Error 1");
    return 0;
}
