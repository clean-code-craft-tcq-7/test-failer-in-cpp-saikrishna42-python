#include"test_alert.h"
 int networkAlert(float celcius) 
    {
        std::cout << "ALERT: Temperature is " << celcius << " celcius.\n";
        // Return 200 for ok
        // Return 500 for not-ok
        // stub always succeeds and returns 200
        return 200;
    }