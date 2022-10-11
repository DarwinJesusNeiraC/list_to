/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: list
* @Descripcion:
*/

#include <iostream>
#include "List.h"

using namespace std;

List::List(){
  last = nullptr;
}

List* List::append(int e){
  if(isEmpty()){
    last = new Node;
    last->data = e;
    last->next = last;
    return this;
  }
  Node* n = new Node;
  n->data = e;
  n->next = last->next;
  last->next = n;
  last = n;
  return this;
}

// agregar en una posicion indicada
List* List::append(int e,int p){
  Node* n = last;
  p-=1;
  while(p--){
    n = n->next;
  }
  Node* np = new Node;
  np->data = e;
  np->next = n->next;
  n->next = np;
  return this;
}

int List::head(){
  return last->next->data;
}

int List::size(){
  int c = 0;
  Node* iter = last;
  while(iter){
    iter = iter->next;
    if(iter == last)
      iter = nullptr;
    c++;
  }
  return c;
}
// 3 4 5 6 7 8
// head 3 
// tail 4 5 6 7 8

List* List::tail(){
  List* lt = new List();
  Node* n = new Node;
  n = last->next;
  lt->last = n;
  return lt;
}

bool List::isEmpty() {
  return last==nullptr;
}

void List::print(){
  Node* iter = last;
  while(iter){
    cout<<iter->data<<" "<<endl;
    iter = iter->next;
    if(iter == last)
      iter = nullptr;
  }
}
