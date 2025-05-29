#include <iostream>
#include <limits>
#include "header.h"

// https://www.geeksforgeeks.org/command-line-arguments-in-cpp/

void print_name(char *word){
    int i = 0;
    while(*(word + i) != '\0'){
        std::cout << *(word + i);
        i += 1;
    }
}

Array<char> *get_name_arr(NameList *arr, int index){
    if (index >= 0 && index < arr->arr_len){
        int length = 0;
        while(*(arr->arr[index] + length) != '\0'){
            length += 1;
        }
        Array<char> *output = new Array<char>();
        output->length = length;
        output->arr = new char[length];
        length = 0;
        while(*(arr->arr[index] + length) != '\0'){
            (output->arr[length]) = *(arr->arr[index] + length);
            length += 1;
        }
        // print_arr(output);
        return output;
    }
    return nullptr;
}

struct NameList *create_name_list(int arr_len, int name_len){
    int i = 0;
    struct NameList *arr = new struct NameList();
    arr->arr_len = arr_len;
    arr->name_len = name_len;
    // https://stackoverflow.com/questions/620843/
    // how-do-i-create-an-array-of-pointers
    arr->arr = new char*[arr_len];
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n' ); 
    while(i < arr_len){
        (arr->arr[i]) = new char[name_len + 1];
        std::cin.getline((arr->arr[i]), name_len + 1);
        // std::cout << "name " << *(arr->arr[i]) <<"\n";
        i += 1;
    }
    return arr;
}

/*
// Wrong solution

struct NameList *create_name_list(int arr_len, int name_len){
    int i = 0;
    struct NameList *arr = new struct NameList();
    arr->arr_len = arr_len;
    arr->name_len = name_len;
    // https://stackoverflow.com/questions/620843/
    // how-do-i-create-an-array-of-pointers
    arr->arr = new char*[arr_len];
    char *name = new char[name_len];
    while(i < arr_len){
        std::cin.getline(name, name_len + 1);
        std::cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n' ); 
        *(arr->arr+i) = name;
        i += 1;
    }
    delete[] name;
    return arr;
}

Why the wrong solution wrong based on what I think
1. char *name = new char[name_len]; wrong should be char *name = new char[name_len + 1]; due to \0
2. *(arr->arr+i) = name;, name is updated and thus arr->arr[0] and arr->arr[1] have same name which is wrong
3. delete[] name; also delete arr->arr
4. arr->arr have only one new char[name_len]; which is not enough to store all memory for all name.

*/

void print_name_list(struct NameList *arr){
    int i = 0;
    std::cout << "[ ";
    while (i < arr->arr_len-1){
        print_name(arr->arr[i]);
        std::cout << ", ";
        i += 1;
    }
    if(i > 0)
        print_name(arr->arr[i]);
    std::cout << " ]\n";
}

void edit_name_list(struct NameList *arr, int index){
    if (index >= 0 && index < arr->arr_len){
        std::cin.getline(*(arr->arr+index), arr->name_len + 1);
        std::cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n' );
    }
}

void delete_all_name(struct NameList *arr){
    int i =0;
    while(i < arr->arr_len){
        delete[] (arr->arr[i]);
        i += 1;
    }
    delete[] arr->arr;
    arr->arr_len = 0;
    arr->name_len= 0;
}
