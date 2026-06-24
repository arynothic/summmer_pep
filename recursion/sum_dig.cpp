#include <iostream>
using namespace std;
 int sum_dig(int n){
   if(n==0) 
      return 0;

   return (n%10) + sum_dig(n/10); 
 }
int main(){
  int n = 23435;
  int ans = sum_dig(n);
  cout<<ans;

}
