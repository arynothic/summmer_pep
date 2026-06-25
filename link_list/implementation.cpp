#include <iostream>
using namespace std;

class Node {
public:
  int val;
  Node *next;

  Node(int val) {
    this->val = val;
    this->next = NULL;
  }
};

int display_ll(Node *head) {
  if (head == NULL) {
    return 0;
  }
  return head->val + display_ll(head->next);
}

int main() {
  Node *first = new Node(1);
  Node *second = new Node(2);
  Node *third = new Node(3);

  first->next = second;
  second->next = third;

  Node *head = first;
  int ans = display_ll(head);
  cout << ans;
  return 0;
}
