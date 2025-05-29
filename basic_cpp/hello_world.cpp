#include <iostream>
using namespace std;

int main(){
    const char* message = new char(12);
    message = "hello world";
    cout << message << "\n";
    return 0;
}
