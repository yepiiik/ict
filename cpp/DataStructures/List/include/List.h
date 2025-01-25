#ifndef LIST_H
#define LIST_H

template <typename T>
class Node;

template <typename T>
class Iterator;

template <typename T>
class List {
    Node<T>* firstElemnt;
    Node<T>* lastElement;
    Iterator<T> iterator;
public:
    List();

    List<T>* push(T value);
    List<T>* pop();
    T* find(T target);
};

#endif