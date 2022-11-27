//Type of Code 
//For Production code define code as PRODUCTION
//For Test Code define code as TEST

#define TEST
#ifdef TEST
        #define networkAlert    networkAlertStub
#endif

#define PRODUCTION
#ifdef TEST
        //include the header file of networkAlert function
#endif

    
    int networkAlertStub(float celcius) ;

