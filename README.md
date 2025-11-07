# ansi-print
Simple repo for easier ANSI escape codes operations

## USAGE

### reset()
Resets all paramethers

### ln variants
Every function described below has its -ln variant, which ads new line at the end of the string

### print(std::string)
Just prints out the string

### print(std::string string, int params[], int size)
Int table contains raw ANSI escape codes, and size is the number of params

### printColor(std::string string, Color color)
Uses ```enum class Color``` to print out string in given color

### printBlink(std::string)
Print out blinking string

### printMulti(std::string string, mode mode[], int size, Color FG, Color BG)
This function uses ```ANSI::mode mode[]``` to store all the params in readible way. If you want to change font or background color you have to specify them, but in other case they have default values.
