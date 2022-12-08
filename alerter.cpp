#include <iostream>
#include <assert.h>
#include "main.hpp"


int alertFailureCount = 0;
#define safe_thr 200



void alertInCelcius(float farenheit) {
    float celcius = fare_celc_conv(farenheit);
    int returnCode = networkAlert(celcius);
    if (returnCode != safe_thr) {
        // non-ok response is not an error! Issues happen in life!
        // let us keep a count of failures to report
        // However, this code doesn't count failures!
        // Add a test below to catch this bug. Alter the stub above, if needed.
        alertFailureCount ++;
    }
    
     assert(alertFailureCount>0);
}

int main() {
       
    alertInCelcius(400.5);
    alertInCelcius(303.6);
    alertInCelcius(200.0);
    alertInCelcius(199.9);
    alertInCelcius(200.1);
    std::cout << "All is well (maybe!)\n";
    return 0;
}
