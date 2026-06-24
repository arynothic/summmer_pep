#include<iostream>
using namespace std;

int sum(int a){
  int s=0;
  while(a){
    s=s+(a%10);
    a=a/10;
  }
  return s;
}

int main(){
  int a = 12324;
  int s = sum(a);
  cout<<s;
}
