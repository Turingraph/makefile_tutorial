# Description

This project is aim to be the coding example of my c++ files, header file and Makefile, in order to demonstrate purpose of this tool and how to use this tool. 

# Recommended Learning Resource

1.  C++ Full Course for free ⚡️ (by Bro Code)
-   https://youtu.be/-TkoO8Z07hI?si=Ppaq-GhV7ZDd5fKB
2.  Pointer
    1.  Pointers in C for Absolute Beginners – Full Course
    -   https://youtu.be/MIL2BK02X8A?si=iTIHzGuGk050NSYd
    2.  Pointers in C / C++ [Full Course]
    -   https://youtu.be/zuegQmMdy8M?si=vmRmovP1Bh7aboCX
3.  Bash Scripting Tutorial for Beginners
-   https://youtu.be/tK9Oc6AEnR4?si=9EKrKJt9Qu6G41QJ
4.  Makefile Tutorial
-   https://makefiletutorial.com/#variables
5.  Git Tutorial
    1.  Git Explained in 100 Seconds (by Fireship)
    -   https://youtu.be/hwP7WQkmECE?si=3dpwnxaAztigW7x-
    2.  Git Tutorial (by me)
    -   https://colab.research.google.com/drive/1ERz9tNhId3gBNsxGpvRWnqfY6x0LJFs-?usp=sharing
    3.  Git and GitHub Tutorial for Beginners (by Kevin Stratvert)
    -   https://youtu.be/tRZGeaHPoaw?si=qNfziX2r9p-XARow
5.  C++ Compiler Works (by The Cherno)
-   https://youtu.be/3tIqpEmWMLI?si=x07BJsgOKS-yYdp1
6.  C++ Header Files (by The Cherno) 
-   https://youtu.be/9RJTQmK0YPI?si=QK3qoPx7hrzY3kqB
7.  "How the C++ Linker Works" (by The Cherno)
-   https://youtu.be/H4s55GgAg0I?si=_3QYfGwzTSc0RD7x 
8.  How to create Dynamic Library in C++ ?
-   https://www.geeksforgeeks.org/how-to-create-a-dynamic-library-in-cpp/

# How to set up ?

1.  How to install g++ in Ubuntu ?
-   https://askubuntu.com/questions/481807/how-to-install-g-in-ubuntu-14-04
2.  How to install g++ in Window ?
-   https://www3.cs.stonybrook.edu/~alee/g++/g++.html
3.  How to install Makefile in Ubuntu ?
-   https://askubuntu.com/questions/161104/how-do-i-install-make
4.  How to install Makefile in Window ?
-   https://stackoverflow.com/questions/32127524/how-to-install-and-use-make-in-windows

# How does C++ compiler works ?

1.  Programmer write c++ text files.
2.  c++ compiler convert the c++ text files as object files. 
-   Note that the c++ compiler only check if the function decorations exists but not check if the implementation of the functions exists becuase those function might have the implementation from other c++ files.
-   One function can never have multiple implementation.
-   `#include ...` allow us to use function from other files.
-   Watch this video to learn more.
-   How the C++ Compiler Works (by The Cherno, https://youtu.be/3tIqpEmWMLI?si=x07BJsgOKS-yYdp1 )
3.  Header file help us write and distribute function decorations in multiple c++ files, this help us avoid circular import error and write more readable code. Watch C++ Header Files (by The Cherno https://youtu.be/9RJTQmK0YPI?si=QK3qoPx7hrzY3kqB ) to learn more about header file.
4.  Create linking which allow the CPU to find the correct implementation from cpp file, of the function decorations in header file. 
-   Linking have 2 types, the static and dynamic linking.
-   Static linking means to link the files in compile time, which is slightly faster than dynamic linking.
-   Dynamic linking means to link the files in run time, which is much more memory efficient than static linking significantly.
-   Sometime people use static linking over dynamic linking because the some parts of the code require different version of the same dependency which cause DLL hell.
-   Watch "How the C++ Linker Works" (by The Cherno, https://youtu.be/H4s55GgAg0I?si=_3QYfGwzTSc0RD7x ) to learn more about how linking in c++ works.
-   Read this https://stackoverflow.com/questions/1993390/static-linking-vs-dynamic-linking to learn more about pros and cons of Static linking and Dynamic linking.
-   We only demonstrate how to link those file using Dynamic linking because it is much more common than static linking.
5.  Execute the executable file that created by linking process via bash script.

# Why we have to use Makefile ?

Why we have to use Makefile when we can `g++ main.cpp array.cpp dot_product.cpp distance.cpp series.cpp str_array.cpp ... last_file.cpp` ?

My answer is
1.  only some files will be edited by programmer and recompile everything is both time consuming and sometimes waste space.
2.  Makefile allow us to use Object file multiple times.
3.  Prevent coding related error e.g. define function multiple time accidentally etc.

# How to create Dynamic Library in C++ ?

Reference
-   https://www.geeksforgeeks.org/how-to-create-a-dynamic-library-in-cpp/
