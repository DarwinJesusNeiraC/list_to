/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @File: main
* @Descripcion:
*/

#include "List.h"
#include<bits/stdc++.h>

using namespace std;

int main(){
  List* li = new List();
  li->append(3);
  li->append(4);
  li->append(5);
  li->print();
  printf("%d valor bool\n", li->isEmpty());
  printf("%d head\n", li->head());
  printf("%d tail's head\n", (li->tail())->head());
  printf("%d size\n", li->size());
   // agregar ejemplo de la implemtacion de agegar n una poscion
  li->append(8, 2);
  li->print();
  printf("%d size\n", li->size());
  printf("%d tail's head append position\n", (li->tail())->head());
  //printf("%d tail's head append position\n", (li->tail()->tail())->head());
  return 0;
}

