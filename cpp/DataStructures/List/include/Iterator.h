#ifndef ITERATOR_H
#define ITERATOR_H

template <typename T>
class Iterator {
    Node<T>* currentNode;
    Node<T>* previousNode;
    Node<T>* nextNode;
public:
    Iterator(
        Node<T>* currentNode = nullptr,
    ) :
        currentNode(currentNode),
        previousNode(currentNode->previousNode),
        nextNode(currentNode->nextNode)
    {}

    bool next() {
        if (nextNode) {
            previousNode = currentNode;
            currentNode = nextNode;
            nextNode = currentNode->nextNode;

            return true;
        }
        return false;
    }

    bool previous() {
        if (previousNode) {
            nextNode = currentNode;
            currentNode = previousNode;
            previousNode = currentNode->previousNode;

            return true;
        }
        return false;
    }
};

#endif