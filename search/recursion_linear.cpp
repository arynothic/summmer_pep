#include <iostream>
#include <vector>
using namespace std;
 
int linear_s(vector <int> arr,int n, int tar){
  if(n==0){
    return 0;
  }
  
    if(arr[n-1]==tar){
      return 1;
    }
    
    return linear_s(arr,n-1,tar);
  
}


int main(){
  vector<int> arr={1,2,4,56,7};
  int tar = 4;
  
  cout<<linear_s(arr,arr.size(),tar);
}


