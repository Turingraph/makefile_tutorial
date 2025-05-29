#include <iostream>

template <typename T>
T power(T x, int n){
    if (n == 0){
        return 1;
    }
    if (n == 1){
        return x;
    }
    T y = 1;
    y = power(x, n/2);
    y = y * y;
    if (n % 2 == 1){
        y *= n;
    }
    return y;
}

template <typename T>
T newton_root(T x, int n, int root){
    // L(x_0) = f(x_0)
    // L(x) = x_1 * f'(x_0) + c
    // L(x_0) - x_0 * f'(x_0) = c
    // L(x) = x_1 * f'(x_0) + f(x_0) - x_0 * f'(x_0)
    // 0 = x_1 * f'(x_0) + f(x_0) - x_0 * f'(x_0)
    // x_1 * f'(x_0) = x_0 * f'(x_0) - f(x_0)
    // x_1 = x_0 - f(x_0) / f'(x_0)
    int i = 0;
    T b = (T) 0;
    while(i < n){
        b = b - (power(b, root) - x)/((T) root);
        i += 1;
    }
    return b;
}

// int main(){
//     int i = 0;
//     while(i < 10){
//         std::cout << "square root 3 = " << (double) newton_root((double) 3,i,2) << "\n";
//         i += 1;
//     }
//     return 0;
// }
