#include <iostream>
#include "header.h"

template <typename T>
T newton_root(T x, int n, int root){
    // L(x_0) = f(x_0)
    // L(x_1) = x_1 * f'(x_0) + c
    // L(x_0) - x_0 * f'(x_0) = c
    // L(x_1) = x_1 * f'(x_0) + f(x_0) - x_0 * f'(x_0)
    // 0 = x_1 * f'(x_0) + f(x_0) - x_0 * f'(x_0)
    // x_1 * f'(x_0) = x_0 * f'(x_0) - f(x_0)
    // x_1 = x_0 - f(x_0) / f'(x_0)
    int i = 0;
    T b = (T) 1;
    while(i < n){
        b = b - (power(b, root) - x)/((T) root * b);
        i += 1;
    }
    return b;
}

template <typename T>
T distance(Array<T> *vec_v){
    T y = (T) 0;
    int i = 0;
    while (i < vec_v->length){
        y += vec_v->arr[i]*vec_v->arr[i];
        i += 1;
    }
    return newton_root(y, 12, 2);
}
