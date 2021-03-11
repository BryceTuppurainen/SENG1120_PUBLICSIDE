CC=g++
CFLAGS=-c -Wall -std=c++98 
LDFLAGS=
SOURCES=point.cpp dpoint.cpp pointDemo.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=runTest.exe

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

%.o : %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf *.o core
