P = tests
OBJECTS = factorial.o tests.o
CFLAGS += -g -O3 -Wall -std=c99
LDLIBS =

$(P): $(OBJECTS)
