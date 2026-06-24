#include <iostream>
using namespace std;

int gcd(int a, int b){
  if(b==0){
    return a;
  }
  return gcd(b,a%b);
  
}


int main(){
  int a= 24;
  int b= 36;
  int ans = gcd(a,b);
  cout<<ans;
  return 0;
}
