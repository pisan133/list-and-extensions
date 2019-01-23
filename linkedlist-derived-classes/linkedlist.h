/**
 * Linked List data structure
 *
 **/

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

using namespace std;

class LinkedList {

  friend ostream& operator<<(ostream& os, const LinkedList& lst);

 private:
  typedef struct node {
    int data;
    struct node *nextptr;
  } Node;

  Node *head;

 public:
  // default constructor
  LinkedList();

  // destructor
  virtual ~LinkedList();

  // is linked list empty?
  bool empty() const;

  // insert item at front
  void insertAtFront(const int &value);

  // insert item at back
  void insertAtBack(const int &value);

  // remove from front
  void removeFromFront();

  // remove from back
  void removeFromBack();

  // retrieve front item
  const int& front() const;

  // retrieve back item
  const int& back() const;
};


#endif  // LINKEDLIST_H
