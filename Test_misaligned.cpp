#include <assert.h>
#include "misaligned.hpp"

int main() {
    int i,j,num;
    
    //Test CASE 4 | White | Blue
    // std::cout << i * 5 + j << " | " << getcolor(i,"Major") << " | " << getcolor(i,"Minor") << "\n"
    //Sending the same value i as 4 and checking the value
    num=4;
    i=num/5;
    j=num%5;
    assert(getcolor(i,"Major")=="White");
    assert(getcolor(j,"Minor")=="Brown");
  
  
  //Test CASE 8 | Red | Green
    // std::cout << i * 5 + j << " | " << getcolor(i,"Major") << " | " << getcolor(i,"Minor") << "\n"
    //Sending the same value i as 8 and checking the value
     num=8;
    i=num/5;
    j=num%5;
    assert(getcolor(i,"Major")=="Red");
    assert(getcolor(j,"Minor")=="Green");
  
  //Test CASE 15 | Black | Slate
    // std::cout << i * 5 + j << " | " << getcolor(i,"Major") << " | " << getcolor(i,"Minor") << "\n"
    //Sending the same value i as 15 and checking the value
    num=15-1;
    i=num/5;
    j=num%5;
    assert(getcolor(i,"Major")=="Black");
    assert(getcolor(j,"Minor")=="Slate");
  
    
  //Test CASE 19 | Yellow | Brown
    // std::cout << i * 5 + j << " | " << getcolor(i,"Major") << " | " << getcolor(i,"Minor") << "\n"
    //Sending the same value i as 19 and checking the value
    num=19-1;
    i=num/5;
    j=num%5;
    assert(getcolor(i,"Major")=="Yellow");
    assert(getcolor(j,"Minor")=="Brown");
  
    
  //Test CASE 25 | Violet | Slate
    // std::cout << i * 5 + j << " | " << getcolor(i,"Major") << " | " << getcolor(i,"Minor") << "\n"
    //Sending the same value i as 25 and checking the value
     num=25-1;
    i=num/5;
    j=num%5;
    assert(getcolor(i,"Major")=="Violet");
    assert(getcolor(j,"Minor")=="Slate");
  
  
 
    std::cout << "All is well (maybe!)\n";
    return 0;
}
