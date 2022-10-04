#include <iostream>


#include "funcs.h"
using namespace std; //remember to get rid of this later

int main()
{
  if(isDivisibleBy(100,25))
    cout<<"Yes"<<endl;
  else
    cout<<"No"<<endl;

  if(isPrime(7));
    cout<<"Yes"<<endl;

  cout<<nextPrime(14)<<endl;
  cout<<countPrimes(2,7)<<endl;
  cout<<isTwinPrime(3)<<endl;
  cout<<nextTwinPrime(7)<<endl;
  cout<<largestTwinPrime(14, 16)<<endl;

  return 0;
}
