#ifndef NODE_H
#define NODE_H

template <typename T>
class Node {
    T value;
    Node<T>* previousNode;
    Node<T>* nextNode;
public:
    Node(
        T value,
        Node<T>* previousNode = nullptr,
        Node<T>* nextNode = nullptr
    );
};

#endif