#include <iostream>
#include <math.h>


int newton(int a, int k) {
    int x = a / 2;
    int y = 1;
    int error = 0.000000001;

    while (x - y > error) {
      x = (x + y) / 2;
      y = a / x;
    }
    if (k == 0) {
      return x;
    } else {
      return y;
    }
  }

  bool isPrime(int n) {

    int divisors = 0;
    for (int count = 1; count <= newton(n,1); count++){
      if (n%count == 0) {
        divisors += 1;
    }}
    if (divisors == 1 && n!=1){
      return true;
    }
    else{
      return false;
    }}

int main(void){
  using namespace std;
  cout<< "main";
  int n;
  cout <<"Enter an integer:";
  cin >>n;
  for(int count = 1; count <= n; count++){
    if (isPrime(count) == true){
      cout<< count<< " \n";
    }}
  return 0;
    }
