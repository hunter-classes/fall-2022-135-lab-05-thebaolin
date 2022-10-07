#include <iostream>
#include "funcs.h"

bool isDivisibleBy(int n, int d){
  //divide by zero
  if(d == 0)
    return false;
  if(n % d == 0)
    return true;
  else
    return false;
}

bool isPrime(int n){
  for(int i = 2; i < n-1; i++){
    if(n % i == 0)
      return false;
  }
  return true;
}

int nextPrime(int n){
  int num = n+1;
    bool programfinished = false;
    while(!isPrime(num)){
      num++;
      if(isPrime(n)){
        programfinished = true;
        }
    }
  return num;
}

int countPrimes(int a, int b){
  int count = 0;
  for(int i = a; i <=b; i++){
    if(isPrime(i))
      count++;
  }
  return count;
}

bool isTwinPrime(int n){
  if(isPrime(n)){
    if(isPrime(n-2) || isPrime(n+2))
      return true;
  }
  return false;
}

int nextTwinPrime(int n){
  int num = n+1;
    bool programfinished = false;
    while(!isTwinPrime(num)){
      num++;
      if(isTwinPrime(n)){
        programfinished = true;
        }
    }
  return num;
}

int largestTwinPrime(int a, int b){
  int max = 0;
  for(int i = a; i <=b; i++){
    if(isTwinPrime(i)){
      if(max < i)
        max = i;
    }
  }
  if(max == 0)
    return -1;
  else
    return max;
}

