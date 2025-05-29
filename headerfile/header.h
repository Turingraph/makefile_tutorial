#pragma once

#include <iostream>
using namespace std;

//------------------------------------------------------------------
// array.cpp

template <typename T>
struct Array{
    int length;
    T *arr;
};

template <typename T>
Array<T> *create_arr(int length, T first_item);

template <typename T>
void print_arr(Array<T> *arr);

//------------------------------------------------------------------
// distance.cpp

template <typename T>
T newton_root(T x, int n, int root);

template <typename T>
T distance(Array<T> *vec_v);

//------------------------------------------------------------------
// dot_product.cpp

template <typename T>
T dot_product(Array<T> *v, Array<T> *u);

//------------------------------------------------------------------
// series.cpp

template <typename T>
T power(T x, int n);

float factorial(int n);

template <typename T>
T reciprocal(T f);

// template <typename T, typename F>
// T series(int n, F&& f);

//------------------------------------------------------------------
// str_array.cpp

void print_name(char *word);

struct NameList{
    int arr_len;
    char **arr;
    int name_len;
};

struct NameList *create_name_list(int arr_len, int name_len);

void print_name_list(struct NameList *arr);

void edit_name_list(struct NameList *arr, int index);

void delete_all_name(struct NameList *arr);

Array<char> *get_name_arr(NameList *arr, int index);

//------------------------------------------------------------------

/*
// Video about Header file.
// https://youtu.be/9RJTQmK0YPI?si=QK3qoPx7hrzY3kqB

// #include "file.cpp"
// https://youtu.be/Wx5hac9LDdA?si=eT8TAt6RPfS9LF4L

If i want 1 class per file, why i need cpp file
, i can write all to .h file ?

Because a separation into .h and .cpp is faster to compile 
and prevents some compile errors like circular dependencies 

if you write a library that others should use, they need to 
know the API. With header files you can expose the API without 
exposing the source code. 

https://www.reddit.com/r/cpp_questions/comments/
t4t8uj/best_practices_about_headers_separate_cpp_file/

*/
