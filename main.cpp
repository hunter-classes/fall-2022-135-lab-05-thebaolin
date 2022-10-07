#include <iostream>
#include "funcs.h"
 //remember to get rid of this later

int main()
{
  if(isDivisibleBy(100,25))
    std::cout<<"Yes"<<std::endl;
  else
    std::cout<<"No"<<std::endl;

  if(isPrime(7));
    std::cout<<"Yes"<<std::endl;

  std::cout<<nextPrime(14)<<std::endl;
  std::cout<<countPrimes(2,7)<<std::endl;
  std::cout<<isTwinPrime(3)<<std::endl;
  std::cout<<nextTwinPrime(7)<<std::endl;
  std::cout<<largestTwinPrime(14, 16)<<std::endl;

  return 0;
}
