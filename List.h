#ifndef LIST_H
#define LIST_H

struct Node {
  int data;
  Node* next;
};
 
class List{
  public:
    List();
    List *append(int e);
    List *append(int e, int p);
    int head();
    int size();
    List *tail();
    bool isEmpty();
    void print();
  private:
    Node* last;  
};

#endif
