#include "misaligned.hpp"


    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};


std::string Map_to_string(int i,int j)
{
    std::string str;
    int n;
    str=majorColor[i - 1];
    n=str.size();
    return std::to_string((((i - 1) * 5)+1 + (j-1))) + " \t| " + majorColor[i - 1] +std::string( 6-n, ' ' )+" | " + minorColor[j - 1];
}

void printColorMap()
{
    int i = 0, j = 0,n=0;
    std::string str;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
         
            std::cout<<Map_to_string( i, j)<<std::endl;
     
        }
    }
        
}
