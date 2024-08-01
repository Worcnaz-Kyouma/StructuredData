#ifndef SD_STACK_H
#define SD_STACK_H

#include "list.hpp"

template <typename T>
class Stack : public List<T> {
private:
    T* topElement;
public:
    Stack(int size);
    Stack(T* elements, int numberOfElements, int size);

    const T& get() override;
    void push(T element) override;
    void pop() override;

    char* list() override;
    int getCount() override;
};

#endif