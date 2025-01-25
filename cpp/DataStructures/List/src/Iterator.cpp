#include "../include/Iterator.h"

template <typename T>
Iterator<T>::Iterator(
    Node<T>* currentNode = nullptr
) :
    currentNode(currentNode),
    previousNode(currentNode->previousNode),
    nextNode(currentNode->nextNode)
{}

template <typename T>
bool Iterator<T>::next() {
    if (nextNode) {
        previousNode = currentNode;
        currentNode = nextNode;
        nextNode = currentNode->nextNode;

        return true;
    }
    return false;
}

template <typename T>
bool Iterator<T>::previous(){
    if (previousNode) {
        nextNode = currentNode;
        currentNode = previousNode;
        previousNode = currentNode->previousNode;

        return true;
    }
    return false;
}