#include<iostream>
#include<vector>
#include<set>
using namespace std;


void removes_dup(vector<int> arr){
  set<int> s;
  for(int i=0; i<arr.size(); i++){
    s.insert(arr[i]);
  }
  for(auto x:s){
    cout<<x<<" ";
  }
}

int main(){
  vector<int> arr= {1,1,5,5,7,34};
  removes_dup(arr);
  return 0;
}
