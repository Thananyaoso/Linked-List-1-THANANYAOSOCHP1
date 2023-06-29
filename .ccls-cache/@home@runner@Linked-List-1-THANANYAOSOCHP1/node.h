#include <string>
#include <iostream>

using namespace std;

class node{
  private:
    int id;
    string name;
    node* next;

  public:
    node(int x, string y){
      id = x;
      name = y;
      next = NULL;
    };

    void print(){
      cout << "Node[" << name << "]: " << id << endl;
    };
    
    node* get_next(){
      return next;
    };

    void set_next(node* node){
      next = node;
    };

   ~node(){
     cout << "Node deleted"<< endl;
   };
};

typedef node* nodePtr;
nodePtr y;
