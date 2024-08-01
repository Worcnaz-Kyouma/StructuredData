#ifndef SD_LIST_H
#define SD_LIST_H

template <typename T>
class List {
protected:
    T* elements;
    int size = 0;
public:
    virtual const T& get() = 0;
    virtual void push(T) = 0;
    virtual void pop() = 0;

    virtual char* list() = 0;
    virtual int getCount() = 0;
};

#endif