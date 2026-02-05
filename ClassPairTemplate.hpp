#include <iostream>

// Class template Pair that accepts two different data types
template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    // Constructor that initializes both values
    Pair(T1 val1, T2 val2);
    
    // Function that displays both values in the format: (value1, value2)
    void print();
};

// Include implementation file
#include "ClassPairTemplate.tpp"