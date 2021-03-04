CC=g++
CFLAGS=-c -Wall -std=c++98 
LDFLAGS=
SOURCES=portfolioTester.cpp portfolio.cpp account.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=runText.exe

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

%.o : %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf *.o core
