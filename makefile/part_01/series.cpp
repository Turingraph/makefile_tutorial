#include <iostream>
#include <functional>

template <typename T>
T power(T x, int n){
    if (n == 0){
        return (T) 1;
    }
    if (n == 1){
        return x;
    }
    T y = (T) 1;
    y = power(x, n/2);
    y = y * y;
    if (n % 2 == 1){
        y *= x;
    }
    return y;
}

float factorial(int n){
    int i = 1;
    float y = 1;
    while(i <= n){
        y *= (float) i;
        i += 1;
    }
    return y;
}

template <typename T>
T reciprocal(T f){
    return ((T) 1)/(f);
}

// https://www.geeksforgeeks.org/
// passing-a-function-as-a-parameter-in-cpp/

// https://stackoverflow.com/questions/1174169/
// function-passed-as-template-argument

// https://stackoverflow.com/questions/40844622/
// use-a-lambda-as-a-parameter-for-a-c-function

template <typename T, typename F>
T series(int n, F&& f){
    int i = 0;
    T y = (T) 0;
    while(i < n){
        y += f(i);
        i += 1;
    }
    return y;
}

// int main(){
//     std::cout << "e = 2.718 = " << series<float>(
//         10, 
//         [](int x) {
//             return reciprocal(factorial(x));
//         }
//     ) << "\n";

//     std::cout << "2 = " << series<float>(
//         10, 
//         [](int x) {
//             return reciprocal(power(2.0, x));
//         }
//     ) << "\n";
    
//     std::cout << power(2, 6) - 1 << " = " << series<float>(
//         10, 
//         [](int x) {
//             return power(2.0, x);
//         }
//     ) << "\n";
    
//     std::cout << ((float) 1)/((float) 6) << " = " << reciprocal<float>(6) << "\n";
//     std::cout << "120 = " << factorial(5) << "\n";
//     std::cout << "32 = " << power(2, 5) << "\n";
//     return 0;
// }
