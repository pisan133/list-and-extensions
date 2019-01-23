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
Stack::Stack() : topIndex{-1} {
}

// empty destructor, let compiler define it
Stack::~Stack() = default;

// return true if stack is empty
bool Stack::empty() const {
  return topIndex == -1;
}

// add item to top of stack
// head --> 2 --> 7
// after push(10)
// head --> 10 --> 2 --> 7
void Stack::push(const int &value) {
  // can also use
  // Node* n = new Node({value, head});
  if (topIndex + 1 >= MAX)
    throw std::out_of_range("push called on full stack");
  topIndex++;
  myArray[topIndex] = value;
}

// remove item from top of stack
// head --> 10 --> 2 --> 7
// after push(10)
void Stack::pop() {
  assert(topIndex >= 0);
  if (topIndex < 0)
    throw std::out_of_range("top called on empty stack");
  topIndex--;
}

const int &Stack::top() const {
  assert(topIndex != -1);
  if (topIndex < 0)
    throw std::out_of_range("top called on empty stack");
  return myArray[topIndex];
}
