#include <iostream>
#include<string>
using namespace std;
void rec_str(string s, int &v){
  if(s.size()==0){
    return ;
  }
  if(s[0]=='a' || s[0]=='e' || s[0]=='i' || s[0]=='o' || s[0]=='u'){
    v++;
  }
  rec_str(s.substr(1),v);
}
int main(){
  string s="lovely professional";
  int v=0; 
  rec_str(s,v);
  cout<<v;
}
