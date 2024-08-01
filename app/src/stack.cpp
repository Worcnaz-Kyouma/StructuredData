#include "stack.hpp"

template <typename T>
Stack<T>::Stack(int size): 
Stack(new T[size], 0, size) {};

template <typename T>
Stack<T>::Stack(T* elements, int numberOfElements, int size): 
elements(elements),
numberOfElements(numberOfElements),
size(size) {
    this->topElement = elements + numberOfElements - 1;
};

template <typename T>
int Stack<T>::getCount() {
    int size = this->topElement - this->elements + 1;
    return size;
}

template <typename T>
const T& Stack<T>::get() {
    if(this->getCount() == 0){
        return nullptr;
    }

    const T& topElementRef = this->topElement;

    return topElementRef;
}

template <typename T>
void Stack<T>::push(T element) {
    if(this->getCount() == this->size){
        //return error
    }
}