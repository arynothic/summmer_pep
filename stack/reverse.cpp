#include <iostream>
#include <stack>
using namespace std;

string reverse_str(string s) {
  stack<char> st;
  for (char c : s) {
    st.push(c);
  }
  string y = "";
  while (!st.empty()) {
    y += st.top();
    st.pop();
  }
  return y;
}

int main() {
  string s = "aryan";
  string y = reverse_str(s);
  cout << y;
}
