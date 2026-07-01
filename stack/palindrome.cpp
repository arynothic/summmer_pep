#include <iostream>
#include <stack>
using namespace std;

bool checkPal(string s) {
  stack<char> st;
  for (char ch : s) {
    st.push(ch);
  }

  for (char ch : s) {
    if (ch != st.top()) {
      return false;
    }
    st.pop();
  }

  return true;
}

int main() {
  string a = "naman";
  bool y = checkPal(a);
  cout << y;
}
