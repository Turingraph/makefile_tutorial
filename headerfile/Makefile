#-------------------------------------------------------------------------------------------------------
# STEP NO.1: Convert the c++ text files as object files. 

objects = array.o distance.o dot_product.o series.o str_array.o

all: $(objects)
	g++ $^ -o all

# $@ = target name
# $^ = all prerequisites
$(objects): %.o: %.cpp
	g++ -c $^ -o $@

clean:
	rm -f *.o all

#-------------------------------------------------------------------------------------------------------
# STEP NO.2: Create Dynamic Library

lib.so: $(objects)
	gcc -o $@ -fpic -shared $^

#-------------------------------------------------------------------------------------------------------
# STEP NO.3: Convert the main.cpp as main.o

main.o: lib.so
	gcc -c main.cpp -o $@
	gcc main $@ -lib.so -L.
	LD_LIBRARY_PATH=. ./main

# -L. means that our selected library which is lib.so is in this directory.
# gcc main main.o -lib.so -L.

# Reference: https://youtu.be/Slfwk28vhws?si=nLFDsisCc4gb_n8g
