#include <iostream>
#include "header.h"
// Don't include "array.cpp" because main.cpp 
// already include "array.cpp"
// #include "array.cpp"

template <typename T>
T dot_product(Array<T> *v, Array<T> *u){
    if (v->length != u->length){
        return 0;
    }
    T y = (T) 0;
    int i = 0;
    while(i < v->length){
        y += (v->arr[i]) * (u->arr[i]);
        i += 1;
    }
    return y;
}
