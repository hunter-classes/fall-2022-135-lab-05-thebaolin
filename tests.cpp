#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("Testing isDivisibleBy"){
    CHECK(isDivisibleBy(100,25) == true);
    //CHECK(isDivisibleBy(0,0) == true); edge cases
    //CHECK(isDivisibleBy(1,0) == false); edge cases
    CHECK(isDivisibleBy(1,1) == true);

}

TEST_CASE("Testing isPrime"){
    CHECK(isPrime(0) == false);
}
