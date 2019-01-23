/**
 * Hello World
 *
 * @author Yusuf Pisan
 * @date 2 Jan 2018
 */

#include <iostream>
#include "stack.h"

using namespace std;

void testStack() {
  Stack st;

  cout << "Pushing 5" << endl;
  st.push(5);
  for (int i = 10; i < 50; i += 10) {
    cout << "Pushing " << i << endl;
    st.push(i);
  }
  cout << "Top of stack has " << st.top() << endl;
  cout << "Popping an item" << endl;
  st.pop();
  cout << "Top of stack now has " << st.top() << endl;
  cout << "Popping all" << endl;
  while (!st.empty()) {
    cout << "top is now " << st.top() << endl;
    st.pop();
  }
  // one more pop will give an error
  // st.pop();
}

// main program
int main() {
  testStack();
  cout << "Done!" << endl;
  return 0;
}
