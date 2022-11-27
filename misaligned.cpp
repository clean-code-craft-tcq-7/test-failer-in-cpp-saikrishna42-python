#include <iostream>
#include <string>
#include <assert.h>

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
            std::cout << i * 5 + j << " | " << getcolor(i,"Major") << " | " << getcolor(i,"Minor") << "\n";
        }
    }
    return i * j;
}

int main() {
    int result = printColorMap();
    assert(result == 25);
    //Test CASE 4 | White | Blue
    // std::cout << i * 5 + j << " | " << getcolor(i,"Major") << " | " << getcolor(i,"Minor") << "\n"
    //Sending the same value i as 4 and checking the value
    assert(getcolor(4,"Major")=="Violet");
    assert(getcolor(4,"Minor")=="Blue");
 
    std::cout << "All is well (maybe!)\n";
    return 0;
}
