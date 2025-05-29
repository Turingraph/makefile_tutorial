# Introduction

# https://makefiletutorial-com.translate.goog/
# ?_x_tr_sl=en&_x_tr_tl=th&_x_tr_hl=th&_x_tr_pto=tc

# https://youtu.be/zeEMISsjO38?si=1Na54iJp9YL3653z

# Ensure that the Makefile exists in the directory. 
# By default, make looks for a file named Makefile or makefile, not MakeFile.
# https://wi-fiplanet.com/how-to-fix-the-error-make-no-targets-specified-and-no-makefile-found-stop/

#-------------------------------------------------------------------------------------------------------
# Variable

family := mumu cheche

# https://makefiletutorial.com/#automatic-variables-and-wildcards
tata: $(family)
	echo "First prerequisite"
	echo $<
	echo "All prerequisite"
	echo $^
	echo "Civil Engineering Bassoon" > tata

mumu:
	echo "Protein Jellyfish" > mumu

cheche:
	echo "Beyond 5D Space" > cheche

# If mumu and cheche don't exist or is updated in newer version than tata,
# Makefile will create mumu and cheche, before create tata.

# If tata is updated but mumu and cheche don't,
# Makefile will only update tata.

# Makefile won't do anything if mumu, cheche and tata are up to date.

#-------------------------------------------------------------------------------------------------------
# Hello World

hello:
	echo "Hello, World" > hello

# We'll then run make hello. As long as the hello file does not exist, 
# the commands will run. If hello does exist, no commands will run.

#-------------------------------------------------------------------------------------------------------
# all
all: mumu cheche tata hello

#-------------------------------------------------------------------------------------------------------
# clean

clean:
	rm -f hello tata

# That means it'll never run unless you explicitly call make clean.
# It's not intended to be a filename. If you happen to have a file named clean, this target won't run

#-------------------------------------------------------------------------------------------------------
# run multiple target

rin len:
	echo "echo "My name is $@."" > $@.sh

