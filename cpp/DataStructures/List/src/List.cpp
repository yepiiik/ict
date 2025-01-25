#include "../include/List.h"
#include "../include/Iterator.h"
#include "../include/Node.h"

template <typename T>
List<T>::List() :
    firstElemnt(nullptr),
    lastElement(nullptr),
    iterator(Iterator(firstElemnt))
{}

template <typename T>
T* List<T>::find(T target) {
    T* resultPtr = nullptr;
    do {
        if (iterator.currentNode->value == target) {
            resultPtr = &(iterator.currentNode->value);
        }
    } while (iterator.next());
    return resultPtr;
}

template <typename T>
List<T>* List<T>::push(T value) {
    if (lastElement) {
        lastElement->nextNode = new Node(value, lastElement);
        lastElement = lastElement->nextNode;
    } else {
        lastElement = new Node(value);
    }

    return this;
}

template <typename T>
List<T>* List<T>::pop() {
    if (lastElement) {
        Node<T>* tempNode = lastElement;
        lastElement = lastElement->previousNode;
        
        delete tempNode;
    }

    return this;
}