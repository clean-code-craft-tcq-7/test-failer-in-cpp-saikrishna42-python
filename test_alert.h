//Type of Code 
//For Production code define code as PRODUCTION
//For Test Code define code as TEST
#include <iostream>
#define TEST
#ifdef TEST
    int networkAlert(float celcius) 
    {
        std::cout << "[STUB]ALERT: Temperature is " << celcius << " celcius.\n";
        // Return 200 for ok
        // Return 500 for not-ok
        // stub always succeeds and returns 200
        if(celcius>200) {
                return 500;
        }
        else{
                return 200;
        }
    }
#endif


    

