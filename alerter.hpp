#include <iostream>
#include "test_alert.h"

#ifdef PRODUCTION
        
        int networkAlert(float celcius) 
        {
             std::cout << "[PROD]ALERT: Temperature is " << celcius << " celcius.\n";
             return 0;
        }
#endif

float fare_celc_conv(float farenheit)
{
    float celcius;
    celcius = (farenheit - 32) * 5 / 9;
    return celcius;
}
