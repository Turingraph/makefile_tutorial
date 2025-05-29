#include <iostream>
using namespace std;

int main(){
    int *a = new int(1);
    *a = 112;
    // Pointer
    cout << a << "\n";
    // Value of Pointer
    cout << *a << "\n";
    // Adress of Pointer
    cout << &a << "\n";
    return 0;
}
