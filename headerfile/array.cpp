#include <iostream>
#include "header.h"

template <typename T>
Array<T> *create_arr(int length, T first_item){
    Array<T> *arr;
    arr->length = length;
    arr->arr = new T[length];
    arr->arr[0] = first_item;
    int i = 1;
    T *input = new T[1];
    while(i < length){
        std::cin >> *input; 
        arr->arr[i] = *input;
        i += 1;
    }
    delete input;
    return arr;
};

template <typename T>
void print_arr(Array<T> *arr){
    int i = 0;
    while(i < arr->length){
        std::cout << "arr[" << i << "] = " << arr->arr[i] << "\n";
        i += 1;
    }
}
