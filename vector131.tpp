#include <algorithm>
#include <initializer_list>

// Setting array size = 0.

template <typename T> 
vector131<T>::vector131() {
     T array[0];
     numPresent = 0;
}

// Returns the elements in the array

template <typename T> 
vector131<T>::vector131(std::initializer_list<T> arr) {
    array = new T[arr.size()];
    std::copy(arr.begin(), arr.end(), array);
    numPresent = arr.size();
}

// Return array from index operator.

template <typename T> 
T& vector131<T>::operator[](int index) {
    return array[index];
}

// Function loops through the 'numPresent' vector.

template <typename T> 
void vector131<T>::elements() {
    for (int i = 0; i < numPresent; i++) {
        std::cout << array[i] << " ";
    } 
    std::cout << std::endl;
}

template <typename T> 
void vector131<T>::push_front(T val) {
     
    // Increases size by one.
    int newSize = numPresent + 1;
     
    // Creates new array pointer of Type T.
    T* array2 = new T[newSize];

    // Places push_front value at first element spot.
    array2[0] = val;
     
    // Copies the remaining of array to new array2
    std::copy(array, array + numPresent, array2 + 1);
     
    delete[] array;
    // Setting array's pointer to new array2.
    array = array2;
     
    // Changing 'numPresent' variable.
    numPresent = newSize;
}

template <typename T>
void vector131<T>::push_back(T val) {
    int newSize = numPresent + 1;
    T* array2 = new T[newSize];
    std::copy(array, array + numPresent, array2);
    
    array2[newSize - 1] = val;
    delete[] array;
    array = array2;

    numPresent = newSize;
}

template <typename T> 
void vector131<T>::pop_back() {
    // Check if 'numPresent' is >= variable 1 change 'newsize' to numPresent - 1.
    if (numPresent >= 1) {
        int newSize = numPresent - 1;
        T* array2 = new T[newSize];
        std::copy(array, array + newSize, array2);
        delete[] array;
        array = array2;

        numPresent = newSize;
    }
}

template <typename T> 
void vector131<T>::resize(int val) {
    int newSize = val;
    T* array2 = new T[newSize];
    
    // Check if variable 'newSize' >= 'numPresent' we copy the array to new array2.
    if (newSize >= numPresent) {
        std::copy(array, array + numPresent, array2);
    } else {
        std::copy(array, array + newSize, array2);
    }

    delete[] array;
    array = array2;

    numPresent = newSize;
}

template <typename T> 
void vector131<T>::insert(int pos, T val) {
    if (pos == 0) {
        this->push_front(val);
    } else if (pos == numPresent) {
        this->push_back(val);
    } else {
        int newSize = numPresent + 1;
        T* array2 = new T[newSize];
        
        std::copy(array, array + pos, array2);
        array2[pos] = val;
        std::copy(array + pos, array + numPresent, array2 + pos + 1);
        delete[] array;
        array = array2;
        
        numPresent = newSize;
    }
}

template <typename T> 
void vector131<T>::clear() {
    numPresent = 0;
    T* array2 = new T[numPresent];
    // Delete array in order to free up space.
    delete[] array;
    // Setting pointer of array to new array2.
    array = array2;
}
