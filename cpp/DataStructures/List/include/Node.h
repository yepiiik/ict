#ifndef NODE_H
#define NODE_H

template <typename T>
class Node {
    Node<T>* previousNode;
    Node<T>* nextNode;
    T value;
public:
    Node(
        T value, Node<T>* previousNode = nullptr,
        Node<T>* nextNode = nullptr
    ) :
        previousNode(previousNode),
        nextNode(nextNode),
        value(value)
    {}
};

#endif