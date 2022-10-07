#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("Testing isDivisibleBy"){
    CHECK(isDivisibleBy(100,25) == true);
    CHECK(isDivisibleBy(25,0) == false);
    CHECK(isDivisibleBy(1,1) == true);
    CHECK(isDivisibleBy(42,76) == false);
    CHECK(isDivisibleBy(16,144) == false);
    CHECK(isDivisibleBy(2,23) == false);

}

TEST_CASE("Testing isPrime"){
    //CHECK(isPrime(0) == false);
    CHECK(isPrime(13) == true);
    CHECK(isPrime(19) == true);
    CHECK(isPrime(41) == true);
    CHECK(isPrime(4) == false);
    CHECK(isPrime(16) == false);
}

TEST_CASE("Testing nextPrime"){
    CHECK(nextPrime(14) == 17);
    CHECK(nextPrime(17) == 19);
    CHECK(nextPrime(43) == 47);
    CHECK(nextPrime(37) == 41);
    CHECK(nextPrime(13) == 17);
}

TEST_CASE("Testing countPrimes"){
    CHECK(countPrimes(3,7) == 3);
    CHECK(countPrimes(11,29) == 6);
    CHECK(countPrimes(3,31) == 10);
    CHECK(countPrimes(17,23) == 3);
    CHECK(countPrimes(41,43) == 2);
}

TEST_CASE("Testing isTwinPrime"){
    CHECK(isTwinPrime(13) == true);
    CHECK(isTwinPrime(29) == true);
    CHECK(isTwinPrime(5) == true);
    CHECK(isTwinPrime(4) == false);
    CHECK(isTwinPrime(20) == false);
}

TEST_CASE("Testing nextTwinPrime"){
    CHECK(nextTwinPrime(5) == 7);
    CHECK(nextTwinPrime(13) == 17);
    CHECK(nextTwinPrime(29) == 31);
    CHECK(nextTwinPrime(19) == 29);
    CHECK(nextTwinPrime(7) == 11);
}

TEST_CASE("Testing largestTwinPrime"){
    CHECK(largestTwinPrime(5,18) == 17);
    CHECK(largestTwinPrime(1,31) == 31);
    CHECK(largestTwinPrime(14,16) == -1);
    CHECK(largestTwinPrime(3,5) == 5);
    CHECK(largestTwinPrime(11,33) == 31);
}
