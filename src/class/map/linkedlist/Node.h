#ifndef NODE_H
#define NODE_H
#include <iostream>

using namespace std;

template <class T>
class Node
{
  public:
    Node();
    Node(const T &item, Node<T> *ptrnext = NULL);
    T data;
    Node<T> *nextNode(); // access to the next node - GETTER & SETTER

    /* METHODS */
    bool isEmpty();
    void insertAfter(Node<T> *p);
    void add(T element); //add as last
    void remove(T element);
    Node<T> *deleteAfter();
    T get(int index); //return data at index
    Node<T> *getNode(const T &item, Node<T> *nextptr = NULL);

  private:
    Node<T> *next;
};

#endif