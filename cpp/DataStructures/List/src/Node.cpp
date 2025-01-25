#include "../include/Node.h"

template <typename T>
Node<T>::Node(
    T value,
    Node<T>* previousNode = nullptr,
    Node<T>* nextNode = nullptr
) :
    value(value),
    previousNode(previousNode),
    nextNode(nextNode)
{}