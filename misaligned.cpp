#include "misaligned.hpp"


    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

std::string getcolor(int i,std::string colorType)
{
    if(colorType == "Major")
        return majorColor[i]; 
    else
        return minorColor[i]; 
}

int printColorMap() {
    
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            std::cout << i * 5 + j << " | " << getcolor(i,"Major") << " | " << getcolor(j,"Minor") << "\n";
        }
    }
}
