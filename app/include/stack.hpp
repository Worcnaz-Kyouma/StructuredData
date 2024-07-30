#ifndef SD_STACK_H
#define SD_STACK_H

#include "collection.hpp"

template <typename T>
class Stack : public Collection {
private:
    T* elements;
    int size = 0;
    
    T* topElement;
public:
    Stack(T* elements, int numberOfElements, int size);

    T* get() override;
    void push(T* element) override;
    void push(T element) override;
    void pop() override;
    char* list() override;

    int getCount() override;
};

#endif