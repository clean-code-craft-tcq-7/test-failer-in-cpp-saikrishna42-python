#include <assert.h>
#include "misaligned.hpp"

int main() {
    
    
    //Test CASE 4 | White | Blue
    // std::cout << i * 5 + j << " | " << getcolor(i,"Major") << " | " << getcolor(i,"Minor") << "\n"
    //Sending the same value i as 4 and checking the value
    assert(getcolor(4,"Major")=="Violet");
    assert(getcolor(4,"Minor")=="Blue");
  
  
  //Test CASE 8 | Red | Green
    // std::cout << i * 5 + j << " | " << getcolor(i,"Major") << " | " << getcolor(i,"Minor") << "\n"
    //Sending the same value i as 8 and checking the value
    assert(getcolor(8,"Major")=="Red");
    assert(getcolor(8,"Minor")=="Green");
  
  //Test CASE 15 | Black | Slate
    // std::cout << i * 5 + j << " | " << getcolor(i,"Major") << " | " << getcolor(i,"Minor") << "\n"
    //Sending the same value i as 15 and checking the value
    assert(getcolor(15,"Major")=="Black");
    assert(getcolor(15,"Minor")=="Slate");
  
    
  //Test CASE 19 | Yellow | Brown
    // std::cout << i * 5 + j << " | " << getcolor(i,"Major") << " | " << getcolor(i,"Minor") << "\n"
    //Sending the same value i as 19 and checking the value
    assert(getcolor(19,"Major")=="Yellow");
    assert(getcolor(19,"Minor")=="Brown");
  
    
  //Test CASE 25 | Violet | Slate
    // std::cout << i * 5 + j << " | " << getcolor(i,"Major") << " | " << getcolor(i,"Minor") << "\n"
    //Sending the same value i as 25 and checking the value
    assert(getcolor(25,"Major")=="Violet");
    assert(getcolor(25,"Minor")=="Slate");
  
  
 
    std::cout << "All is well (maybe!)\n";
    return 0;
}
