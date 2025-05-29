#-------------------------------------------------------------------------------------------------------
# * Wildcard

# objects = root3.cpp series.cpp vec.cpp

hello: $(wildcard *.cpp)
	echo $(wildcard *.cpp) >> hello

# https://unix.stackexchange.com/questions/579332/
# whats-the-difference-between-percent-vs-asterisk-star-makefile-prerequisite

#-------------------------------------------------------------------------------------------------------
# # Implicit Rules

# CXX = g++ # Flag for implicit rules
# CXXFLAGS = -g # Flag for implicit rules. Turn on debug info
# 
# # Implicit rule #1: root3 is built via the C linker implicit rule
# # Implicit rule #2: root3.o is built via the C compilation implicit rule, because root3.c exists
# root3: root3.o

#-------------------------------------------------------------------------------------------------------
# Static Pattern Rules
objects = main.o root3.o series.o vec.o

all: $(objects)
	g++ $^ -o all

# $@ = target name
# $^ = all prerequisites
$(objects): %.o: %.cpp
	g++ -c $^ -o $@

clean:
	rm -f *.o all

#-------------------------------------------------------------------------------------------------------
# Recursive use of make

nujabes:
	mkdir -p nujabes
	cd nujabes && $(MAKE)
