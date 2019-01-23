/**
 * Linked List data structure
 *
 **/


#include <cassert>
#include <stdexcept>
#include <iostream>
#include "linkedlist.h"

using namespace std;

ostream& operator<<(ostream& os, const LinkedList& lst) {
  if (lst.empty()) {
    os << "<EMPTY>";
  }  else {
    LinkedList::Node* curr = lst.head;
    while (curr != nullptr) {
      os << curr->data << " --> ";
      curr = curr->nextptr;
    }
  }
  return os;
}

// default constructor
LinkedList::LinkedList() : head{nullptr} {
}

// destructor
LinkedList::~LinkedList() {
  Node *curr = head;
  while (curr) {
    Node *toDelete = curr;
    curr = curr->nextptr;
    delete toDelete;
  }
}

// return true if stack is empty
bool LinkedList::empty() const {
  return head == nullptr;
}

// add item to front of linked list
// head --> 2 --> 7
// after insertAtFront(10)
// head --> 10 --> 2 --> 7
void LinkedList::insertAtFront(const int &value) {
  // can also use
  // Node* n = new Node({value, head});
  auto *n = new Node();
  n->data = value;
  n->nextptr = head;
  head = n;
}

// add item to back of linked list
// head --> 2 --> 7
// after insertAtBack(10)
// head --> 2 --> 7 --> 10
void LinkedList::insertAtBack(const int &value) {
  // can also use
  // Node* n = new Node({value, head});
  auto *n = new Node();
  n->data = value;
  n->nextptr = nullptr;
  if (!head) {
    head = n;
  } else {
    Node* curr = head;
    while (curr->nextptr != nullptr)
      curr = curr->nextptr;
    curr->nextptr = n;
  }
}

// remove item from front of linked list
// head --> 10 --> 2 --> 7
// after removeFromFront()
// head --> 2 --> 7
void LinkedList::removeFromFront() {
  assert(head);
  if (!head)
    throw std::out_of_range("removeFromFront called on empty list");
  Node *toDelete = head;
  head = head->nextptr;
  delete toDelete;
}

// remove item from back of linked list
// head --> 10 --> 2 --> 7
// after removeFromBack()
// head --> 10 --> 2
void LinkedList::removeFromBack() {
  assert(head);
  if (!head)
    throw std::out_of_range("removeFromBack called on empty list");
  if (head->nextptr == nullptr) {
    // only one item in list
    delete head;
    head = nullptr;
  } else {
    Node *curr = head;
    while (curr->nextptr->nextptr != nullptr)
      curr = curr->nextptr;
    Node *toDelete = curr->nextptr;
    curr->nextptr = nullptr;
    delete toDelete;
  }
}

const int &LinkedList::front() const {
  assert(head);
  if (!head)
    throw std::out_of_range("front called on empty linked list");
  return head->data;
}

const int &LinkedList::back() const {
  assert(head);
  if (!head)
    throw std::out_of_range("back called on empty linked list");
  Node *curr = head;
  while (curr->nextptr != nullptr)
    curr = curr->nextptr;
  return curr->data;
}