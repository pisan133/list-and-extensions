/**
 * Stack data structure
 *
 * Similar to STL stack
 * push - add item
 * top - get item on top of stack
 * pop - remove item
 */

#include <cassert>
#include <stdexcept>
#include <iostream>
#include "stack.h"

using namespace std;

// default constructor
Stack::Stack() : head{nullptr} {
}

// destructor
Stack::~Stack() {
  Node *curr = head;
  while (curr) {
    Node *toDelete = curr;
    curr = curr->nextptr;
    delete toDelete;
  }
}

// return true if stack is empty
bool Stack::empty() const {
  return head == nullptr;
}

// add item to top of stack
// head --> 2 --> 7
// after push(10)
// head --> 10 --> 2 --> 7
void Stack::push(const int &value) {
  // can also use
  // Node* n = new Node({value, head});
  auto *n = new Node();
  n->data = value;
  n->nextptr = head;
  head = n;
}

// remove item from top of stack
// head --> 10 --> 2 --> 7
// after push(10)
void Stack::pop() {
  assert(head);
  if (!head)
    throw std::out_of_range("top called on empty stack");
  Node *toDelete = head;
  head = head->nextptr;
  delete toDelete;
}

const int &Stack::top() const {
  assert(head);
  if (!head)
    throw std::out_of_range("top called on empty stack");
  return head->data;
}
