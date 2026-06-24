#include<iostream>
using namespace std;

int factorial(unsigned n){
  if(n==0){
    return 1;
  }
  return n*factorial(n-1);
}


int main(){
  unsigned int n = 32;
  unsigned int ans = factorial(n);
  cout<<ans;
  return 0;
}
