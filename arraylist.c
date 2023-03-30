#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "arraylist.h"

//normal array
typedef struct ArrayList {
    void **data;
    int capacity;
    int size;
} ArrayList;

ArrayList *createList(void) {

  ArrayList *a = NULL;
  a = (ArrayList *) malloc (sizeof(ArrayList));

  a->data = (void *) malloc (sizeof(void));
  a->capacity = 2;
  a->size = 0;
  
  return a;
}

void append(ArrayList * l, void * data){

  l->data[l->size] = data;

  if (l->size < l->capacity){
    l->size++;
  }
  else{
    l->capacity *= 2;
    l->size++;
  }

}

void push(ArrayList * l, void * data, int i){

  if (l->size == 0) return;

  if (i > l->size){
    return;
  }

  if (l->size == l->capacity){
    l->capacity *= 2;
  }

  for (int k = l->size ; k >= i ; k--){
    l->data[k] = l->data[k+1];
  }
  l->data[i] = data;

}

void* pop(ArrayList * l, int i){

  if (l->size == 0) return NULL;
  void *aux;
  
  if (i < 0){
    int pos = l->size + i;
    while (pos < 0){
      pos = l->size + pos;
    }
    aux = l->data[pos];
    i = pos;
  }
  else{
    aux = l->data[i];
  }

  for (int k = i ; k < l->size ; k++){
    l->data[k] = l->data[k+1];
  }
  l->size--;

  
    return aux;
}

void* get(ArrayList * l, int i){

  if (i >= l->size) return NULL;
  if (i < 0){
    int pos = l->size + i;
    while (pos < 0){
      pos = l->size + pos;
    }
    return l->data[pos];
  }
  return l->data[i];
}

int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){
    
}
