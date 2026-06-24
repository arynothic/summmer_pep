#include <iostream>
using namespace std; 

int fibonacci(int n){
  if(n==0) return 0;
  if(n==1) return 1;
  int a=0;
  int b=1;
  for(int i=2; i<=n; i++){
    int c=a+b;
    a=b;   b=c;
  }
  return b;
}


int main(){
  int n;
  cin>>n;
  int ans = fibonacci(n);
  cout<<ans;
  return 0;
}
