//Type of Code 
//For Production code define code as PRODUCTION
//For Test Code define code as TEST
#include <iostream>
#define TEST
#ifdef TEST
        #define networkAlert    networkAlertStub
#endif


#ifdef PRODUCTION
        //include the header file of networkAlert function
#endif

    
    int networkAlert(float celcius) ;

