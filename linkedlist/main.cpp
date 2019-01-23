/**
 * Linked List
 *
 * @author Yusuf Pisan
 * @date 2 Jan 2018
 */

#include <iostream>
#include "linkedlist.h"

using namespace std;

void testLinkedList() {
  LinkedList st;

  cout << "insertAtFront 5" << endl;
  st.insertAtFront(5);
  for (int i = 10; i < 50; i += 10) {
    cout << "insertAtFront " << i << endl;
    st.insertAtFront(i);
  }
  cout << "List is: " << st << endl;
  cout << "Front is: " << st.front() << endl;
  
  cout << "Removing from front an item" << endl;
  st.removeFromFront();
  cout << "List is: " << st << endl;

  for (int i = 15; i < 20; ++i) {
    cout << "insertAtBack " << i << endl;
    st.insertAtBack(i);
  }
  cout << "List is: " << st << endl;
  cout << "Back is: " << st.back() << endl;

  cout << "Removing from back an item" << endl;
  st.removeFromBack();
  cout << "List is: " << st << endl;
}

// main program
int main() {
  testLinkedList();
  cout << "Done!" << endl;
  return 0;
}
