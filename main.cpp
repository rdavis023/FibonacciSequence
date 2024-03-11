#include <iostream>
using namespace std;

static int counter = 0;

int fib (int n){
  counter++;
  if (n == 0 || n == 1){
    return n;
  }
  return fib(n - 1) + fib(n - 2);
}

int main(){

  int n = 7;

  cout << "\nFib of " << n << " = " << fib(n);
  cout << "\n\nCounter = " << counter << endl;
}