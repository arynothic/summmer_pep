#include<iostream>
using namespace std;

int digits(int number){
  int cnt=0;
  while(number){
    cnt++;
    number=number/10;
  }
  return cnt;
}
int main(){
  int number = 1234;
  int ans = digits(number);
  cout<<ans;
}
