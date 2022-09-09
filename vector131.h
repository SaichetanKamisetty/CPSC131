#ifndef VECTOR131_H
#define VECTOR131_H
#include <algorithm>
#include <initializer_list>

        //-------------------
        // Vector131 Class
        //-------------------

template<typename T> class vector131 {
    public: 

        // Default constructor, will create an array of size 0 if it is not initiated with any items.
        vector131();

        // Constructor, takes elements using direct-list-initialization.
        vector131(std::initializer_list<T> arr);
        // Deconstructor, used to delete the array pointer to free up memory.
        ~vector131() { delete[] array; }
        // Operator Overload
        T& operator[](int index); // Returns element using index operator overload. 
        // Member Functions
        void elements(); // Prints the list of elements with cout.
        void push_front(T val); // Increases array size by 1 and puts the value in front. 
        void push_back(T val); // Increases array size by 1 and puts the value in the back.
        void pop_back(); // Decreases array size by 1 and removes the last value.
        void resize(int val); // Resize array to make it any size you want.
        void insert(int pos, T val); // Increase array size by 1 and inserts value in the correct element position.
        void clear(); // Removes all the elements in the array. 
        int size() {return elemPresent;} // Returns the number of elements in the array. 
    private:
        T* array = nullptr;
        int elemPresent;
};

#include "vector131.tpp"

#endif
