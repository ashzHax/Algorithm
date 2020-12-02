# by : ashz
# reason : compiling study-purpose C files

COMPILER=c++
FLAGS=-Wall -Werror
INCLUE=-I

OBJECT=main.o
TARGET=main.cc
OUTPUT_NAME=run

$(OUTPUT_NAME): $(OBJECT)
	$(COMPILER) -o $(OUTPUT_NAME) $(OBJECT) $(FLAGS) $(INCUDE)
	rm -rf *.o

$(OBJECT) : $(TARGET)
	$(COMPILER) -c -o $(OBJECT) $(TARGET)

clean:
	rm -rf $(OUTPUT_NAME)

