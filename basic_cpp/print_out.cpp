#include <iostream>

// https://www.geeksforgeeks.org/command-line-arguments-in-cpp/

void print_word(char *word){
    int i = 0;
    while(*(word + i) != '\0'){
        std::cout << *(word + i);
        i += 1;
    }
}

int main(int argc, char* argv[]){
    int i = 1;
    int j;
    std::cout << "[ ";
    while(i < argc - 1){
        print_word(argv[i]);
        std::cout << ", ";
        i += 1;
    }
    print_word(argv[i]);
    std::cout << " ]\n";
    return 0;
}
