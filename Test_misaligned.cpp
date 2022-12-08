#include <assert.h>
#include "misaligned.hpp"
bool CompareStrings(std::string checkString,std::string strToCompare)
{
  
    return checkString==(strToCompare);
}

int main()
{
      
    printColorMap();
    // Random Test
    assert(CompareStrings( Map_to_string(5,5),"25 \t| Violet | Slate"));
    assert(CompareStrings(Map_to_string(2,4),"9 \t| Red    | Brown"));

    std::cout << "All is well (maybe!)\n";
    return 0;
}
