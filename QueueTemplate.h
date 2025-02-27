#include <iostream>
using namespace std;

template <typename T>

class QueueTemplate{
private:
    T* data;
    size_t capacity;
    size_t size;


    void Move(){
        for (int i = 0; i < size-1; i++) {
            data[i] = data[i+1];
        }
    }
public:
    QueueTemplate(size_t capacity):capacity(capacity), 
                                    size(0),
                                    data(new T[capacity]){}
    ~QueueTemplate(){
        delete[] data;
    }
    void pop(){
        if (empty())   throw "Queue is empty";
        Move();
        size--;
    }
    void push(const T& elem) {
        if (full())   throw "Queue is full";
        data[size++] = elem;
    }
    size_t Size()   {return size;}
    bool empty()    {return size == 0;}
    bool full()     {return size == capacity;}
    T& front()      {return data[0];}
    T& back()       {return data[size];}
};