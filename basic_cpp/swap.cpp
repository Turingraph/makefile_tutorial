#include <iostream>

template <typename T>
void swap(T *a, T *b);

int main(){
    int a = 10;
    int b = 20;
    swap(&a, &b);
    std::cout << "20 = " << a << "\n";
    std::cout << "10 = " << b << "\n";
    return 0;
}

template <typename T>
void swap(T *a, T *b){
    T t = *a;
    *a = *b;
    *b = t;
}