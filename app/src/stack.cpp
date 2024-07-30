#include "stack.hpp"

template <typename T>
Stack<T>::Stack(T* elements, int numberOfElements, int maxSize):
    elements(elements),
    count(initialSize),
    size(maxSize) {};

template <typename T>
T* Stack<T>::get(){
    return this->topElement;
};

template <typename T>
void Stack<T>