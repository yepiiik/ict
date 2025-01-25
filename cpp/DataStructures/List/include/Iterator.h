#ifndef ITERATOR_H
#define ITERATOR_H

template <typename T>
class Node;

template <typename T>
class Iterator {
    Node<T>* currentNode;
    Node<T>* previousNode;
    Node<T>* nextNode;
public:
    Iterator(
        Node<T>* currentNode = nullptr
    );

    bool next();

    bool previous();
};

#endif