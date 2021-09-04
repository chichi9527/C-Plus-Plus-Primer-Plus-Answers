TARGET  := main
CC      := g++
CCFLAGS := -O
SOURCES := main.cpp
BASES   := $(basename $(SOURCES))
OBJECTS := $(addsuffix .o, $(BASES))

all: $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS) $(CCFLAGS)

%.o: %.cpp
	$(CC) -o $@ -c $< $(CCFLAGS)

.PHONY: clean
clean:
	rm $(OBJECTS)
	rm $(TARGET)