#include "../include/List.h"

template <typename T>
T* List::find(T& target) {
    T* resultPtr = nullptr;
    do {
        if (iterator.currentNode->value == target) {
            resultPtr = &(iterator.currentNode->value);
        }
    } while (iterator.next());
    return resultPtr;
}