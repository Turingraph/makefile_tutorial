#include <iostream>
#include "header.h"
// #include "array.cpp"
// #include "distance.cpp"
// #include "dot_product.cpp"
// #include "series.cpp"
// #include "str_array.cpp"
// https://youtu.be/Wx5hac9LDdA?si=eT8TAt6RPfS9LF4L

int main(){
//------------------------------------------------------------------
// array.cpp
    int length;
    std::cin >> length;
    float first_item;
    std::cin >> first_item;
    Array<float> *vec_v = create_arr<float>(length, first_item);
    print_arr(vec_v);
    delete[] vec_v->arr;

//------------------------------------------------------------------
// distance.cpp
    
    vec_v->length = 2;
    vec_v->arr = new float[2];
    *vec_v->arr = 1;
    *(vec_v->arr + 1) = 1;
    std::cout << distance(vec_v) << " == " << newton_root((double) 2, 12, 2) << "\n";
    delete[] vec_v->arr;
    
    vec_v->length = 2;
    vec_v->arr = new float[2];
    *vec_v->arr = 3.0;
    *(vec_v->arr + 1) = 4.0;
    std::cout << distance(vec_v) << " == 5\n";
    delete[] vec_v->arr;
    
    vec_v->length = 3;
    vec_v->arr = new float[3];
    *vec_v->arr = 1;
    *(vec_v->arr + 1) = 1;
    *(vec_v->arr + 2) = 1;
    std::cout << distance(vec_v) << " == " << newton_root((double) 3, 12, 2) << "\n";
    delete[] vec_v->arr;

//------------------------------------------------------------------
// dot_product

    vec_v->length = 2;
    vec_v->arr = new float[2];
    *vec_v->arr = 3;
    *(vec_v->arr + 1) = 4;

    Array<float> *vec_u = new Array<float>();
    vec_u->length = 2;
    vec_u->arr = new float[2];
    *vec_u->arr = 0.5;
    *(vec_u->arr + 1) = 2;
    std::cout << dot_product<float>(vec_v, vec_u) << " == " << 3*0.5 + 4*2 << "\n";
    delete[] vec_v->arr;
    delete[] vec_u->arr;

//------------------------------------------------------------------
// series.cpp
    // I get 2 error.
    //  1st Error
    //      error: ‘T series(int, F&&) [with T = float; F = main()::<lambda(int)>]’, 
    //      declared using local type ‘main()::<lambda(int)>’, is used but never defined [-fpermissive]
    //  2nd Error
    //      warning: ‘T series(int, F&&) [with T = float; F = main()::<lambda(int)>]’ used but never defined

    // std::cout << "e = 2.718 = " << series<float>(
    //     10, 
    //     [](int x) {
    //         return reciprocal(factorial(x));
    //     }
    // ) << "\n";

    // std::cout << "2 = " << series<float>(
    //     10, 
    //     [](int x) {
    //         return reciprocal(power(2.0, x));
    //     }
    // ) << "\n";
    
    // std::cout << power(2, 6) - 1 << " = " << series<float>(
    //     6, 
    //     [](int x) {
    //         return power(2.0, x);
    //     }
    // ) << "\n";
    
    std::cout << ((float) 1)/((float) 6) << " = " << reciprocal<float>(6) << "\n";
    std::cout << "120 = " << factorial(5) << "\n";
    std::cout << "32 = " << power(2, 5) << "\n";

//------------------------------------------------------------------
// str_array.cpp
    NameList *arr = create_name_list(4, 15);
    print_name_list(arr);
    Array<char> *your_name = get_name_arr(arr, 2);
    edit_name_list(arr, 2);
    print_name_list(arr);
    delete_all_name(arr);
    print_arr(your_name);
    delete[] your_name->arr;
    delete your_name;

//------------------------------------------------------------------

    return 0;
}
