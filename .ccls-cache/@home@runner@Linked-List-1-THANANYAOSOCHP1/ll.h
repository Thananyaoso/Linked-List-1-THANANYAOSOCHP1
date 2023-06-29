#include <iostream>
#include "node.h"
#include <string>
using namespace std;

class LL {
   nodePtr hol;
   int size;
public:
   LL();
   void insert_node(int, string);
   void print_all();
   ~LL();
};

LL::LL() {
  hol = NULL;
  size = 0;
}

void LL::insert_node(int x, string y) {
  nodePtr newNode = new node(x, y);
  if (hol == NULL) {
    hol = newNode;
  }else {
    nodePtr current = hol;
    while (current->get_next() != NULL) {
      current = current->get_next();
    }
    current->set_next(newNode);
  }
  size++;
}

void LL::print_all() {
  nodePtr current;
  for(current = hol; current; current->get_next()){
    current->print();
    if(!(current->get_next())){
      break;
    }
    current = current->get_next();
  }
  cout << endl;
}

LL::~LL() {
  nodePtr current = hol;
  while (current != NULL) {
    nodePtr nextNode = current->get_next();
    delete current;
    current = nextNode;
  }
}
