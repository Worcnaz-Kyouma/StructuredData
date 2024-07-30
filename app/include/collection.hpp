#ifndef SD_COLLECTION_H
#define SD_COLLECTION_H

template <typename T>
class Collection {
public:
    virtual T* get() = 0;
    virtual void push(T*) = 0;
    virtual void push(T) = 0;
    virtual void pop() = 0;
    virtual char* list() = 0;
    virtual int getCount() = 0;
};

#endif