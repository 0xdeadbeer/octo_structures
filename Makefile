SP_OUTPUT_DIR=build
SP_OUTPUT_NAME=octo_example
SP_OUTPUT_LOCATION=$(SP_OUTPUT_DIR)/$(SP_OUTPUT_NAME)

run: 
	./$(SP_OUTPUT_LOCATION)

%.o: %.c
	gcc -o $(SP_OUTPUT_DIR)/$(notdir $@) $^ 

build: 
	mkdir $(SP_OUTPUT_DIR)
	gcc -o $(SP_OUTPUT_LOCATION) $(shell find . -name '*.c')

clean: 
	rm -rf $(SP_OUTPUT_DIR)/

all: 
	make clean
	make build 
	make run 

debug: 
	make clean 
	make debug_build 
	make run 
