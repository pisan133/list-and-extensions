/**
 * Stack data structure
 *
 * Similar to STL stack
 * push - add item
 * top - get item on top of stack
 * pop - remove item
 */

#include "stack.h"

using namespace std;

// add item to top of stack
// head --> 2 --> 7
// after push(10)
// head --> 10 --> 2 --> 7
void Stack::push(const int &value) {
  insertAtFront(value);
}

// remove item from top of stack
// head --> 10 --> 2 --> 7
// after push(10)
void Stack::pop() {
  removeFromFront();
}

const int &Stack::top() const {
  return front();
}
