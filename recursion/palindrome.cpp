#include<iostream>
using namespace std;

bool check(string s, int left, int right){
  if(s[left]> s[right]){
    return true;
  }

  if(s[left]!=s[right]){
    return false;
  }

  check(s,left+1, right-1);

  return true;
}



int main(){
  string s="NAMAN";
  int left=0;
  int right=s.size(); 
  bool ans = check(s,left,right);
  cout<<ans;
  return 0;
}
