#include <iostream>
#include <string>
#include <limits>
using namespace std;

// template <typename T>
// https://stackoverflow.com/questions/22008755/
// how-to-get-size-of-dynamic-array-in-c
// You can't. 
// The size of an array allocated with new[] is not stored in any way 
// in which it can be accessed. 
// THIS FUNCTION IS WRONG !
// int get_arr_length(T *arr){
//     int i = 0;
//     while(arr[i] != '\0'){
//         i += 1;
//     }
//     return i;
// }

int main(){
    int len_name;
    // https://stackoverflow.com/questions/5739937/
    // using-getlinecin-s-after-cin
    cout << "How long is your name ?\n";
    cin  >> len_name;
    cin.ignore ( std::numeric_limits<std::streamsize>::max(), '\n' ); 

    // https://www.reddit.com/r/Cplusplus/
    // comments/73r3vv/how_can_you_accept_input_with_spaces/
    cout << "len_name " << len_name <<"\n";
    char* name = new char[len_name + 1];

    cout << "What is your name ?\n";
    cin.getline(name,len_name + 1);
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n' ); 
    cout << "Hello " << name << ", nice to meet you.\n";
    // https://www.geeksforgeeks.org/
    // new-and-delete-operators-in-cpp-for-dynamic-memory/
    delete name;
    cout << "After delete " << name << "\n";
    return 0;
}

