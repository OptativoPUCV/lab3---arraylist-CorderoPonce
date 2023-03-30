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
  l->size++;

}

void push(ArrayList * l, void * data, int i){

}

void* pop(ArrayList * l, int i){
    return NULL;
}

void* get(ArrayList * l, int i){
    return NULL;
}

int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){
    
}
