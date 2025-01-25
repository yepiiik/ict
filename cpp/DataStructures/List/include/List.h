#ifndef LIST_H
#define LIST_H

template <typename T>
class List {
    Node<T>* firstElemnt;
    Node<T>* lastElement;
    Iterator<T> iterator;
public:
    List() :
        firstElemnt(nullptr),
        lastElement(nullptr),
        iterator(Iterator(firstElemnt))
    {}

    T* find(T& target);
};

#endif