/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: list
* @Descripcion:
*/
#include <assert.h>
#include <iostream>
#include "List.h"
#include<bits/stdc++.h>
#include "gtest/gtest.h"

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
  assert(!isEmpty());
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
  assert(!isEmpty());
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
  assert(c>=0);
}
// 3 4 5 6 7 8
// head 3 
// tail 4 5 6 7 8

List* List::tail(){
  assert(!isEmpty());
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

class LisTest : public ::testing::Test{
  protected:
    void SetUp() override {

      l1->append(3);
      l1->append(4);
    }

    void TearDown() override {
      cout<<"Eliminando objetos\n";
    }
    List* l1 = new List();
    List* l2 = new List();
    //List* l3 = new List();
};

TEST_F(LisTest, IsEmpty){
   EXPECT_EQ(l1->isEmpty(),false);
}

TEST_F(LisTest, WhenHead){
   EXPECT_EQ(l1->head(),3);
   EXPECT_NE(l1->head(),5);
}

TEST_F(LisTest, WhenTail){
   EXPECT_NE(l2->head(),3);
}
