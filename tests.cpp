#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("Checking for Cesar func:" ) 
{ 
    CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
    CHECK(encryptCaesar("Hello, World!" , 10) == "Rovvy, Gybvn!");
    CHECK(encryptCaesar("Call Me If You Get Lost", 2) == "Ecnn Og Kh Aqw Igv Nquv");
}

