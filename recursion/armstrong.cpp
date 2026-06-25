#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool armstrong(int num, int cnt){
  int sum=0;
  while(num>0){
    sum=sum+pow(num%10,cnt);
    num=num/10;
  }
  return sum;
}

int digits(int n){
  int cnt=0;
  while(n>0){
    n=n/10;
    cnt++;
  }
  return cnt;
}

int main(){
  
  int n = 153;
  int cnt = digits(n);
  bool ans = armstrong(n,cnt);
  cout<<ans;
}



