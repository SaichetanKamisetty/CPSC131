#ifndef VECTOR131_H
#define VECTOR131_H
#include <algorithm>
#include <initializer_list>

template<typename T> class vector131 {
    public: 

        // Default constructor, will create an array of size 0 if it is not initiated with any items.
        vector131();

        // Constructor, takes elements using direct 
        vector131(std::initializer_list<T> arr);
        ~vector131() { delete[] array; }
        // Operator Overload
        T& operator[](int index);
        // Member Functions
        void elements();
        void push_front(T val);
        void push_back(T val);
        void pop_back();
        void resize(int val);
        void insert(int pos, T val);
        void clear();
        int size() {return numPresent;}
    private:
        T* array = nullptr;
        int numPresent;
};

#include "vector131.tpp"

#endif
