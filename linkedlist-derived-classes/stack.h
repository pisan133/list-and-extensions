/**
 * Stack data structure
 *
 * Similar to STL stack
 * push - add item
 * top - get item on top of stack
 * pop - remove item
 **/

#ifndef STACK_H
#define STACK_H

#include "linkedlist.h"

class Stack : public LinkedList{

 public:
  // insert item
  void push(const int &value);

  // remove top item
  void pop();

  // retrieve the top item
  const int& top() const;
};


#endif  // STACK_H
