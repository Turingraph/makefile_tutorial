#include <iostream>

template <typename T>
struct Array{
    int length;
    T *arr;
};

// template <typename T>
// struct Array<T> *create_arr(int length, T first_item){
//     struct Array<T> *arr;
//     arr->length = length;
//     arr->arr = new T[length];
//     arr->arr[0] = first_item;
//     int i = 1;
//     T *input = new T(1);
//     while(i < length){
//         cin >> *input;
//         arr->arr[i] = *input;
//         i += 1;
//     }
//     delete input;
//     return arr;
// };

template <typename T>
void print_arr(struct Array<T> *arr){
    int i = 0;
    while(i < arr->length){
        std::cout << "arr[" << i << "] = " << arr->arr[i] << "\n";
        i += 1;
    }
}

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

// int main(){
//     Array<float> *vec_v = new Array<float>();
//     vec_v->length = 2;
//     vec_v->arr = new float[2];
//     *vec_v->arr = 3;
//     *(vec_v->arr + 1) = 4;

//     Array<float> *vec_u = new Array<float>();
//     vec_u->length = 2;
//     vec_u->arr = new float[2];
//     *vec_u->arr = 0.5;
//     *(vec_u->arr + 1) = 2;
//     std::cout << (float) dot_product<float>(vec_v, vec_u) << " == " << 3*0.5 + 4*2 << "\n";
//     delete[] vec_v->arr;
//     delete[] vec_u->arr;

//     return 0;
// }
