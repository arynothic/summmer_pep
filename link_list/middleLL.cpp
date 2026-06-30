#include <iostream>
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(nullptr) {}
};

ListNode *findMiddle(ListNode *head) {
  if (head == nullptr) {
    return nullptr;
  }
  ListNode *slow = head;
  ListNode *fast = head;
  while (fast != nullptr && fast->next != nullptr) {
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow;
}

void printList(ListNode *head) {
  while (head != nullptr) {
    std::cout << head->val << " -> ";
    head = head->next;
  }
  std::cout << "NULL\n";
}

int main() {
  ListNode *head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(3);
  head->next->next->next = new ListNode(4);
  head->next->next->next->next = new ListNode(5);

  ListNode *middle = findMiddle(head);

  if (middle != nullptr) {
    std::cout << middle->val << "\n";
    printList(middle);
  }
  return 0;
}
