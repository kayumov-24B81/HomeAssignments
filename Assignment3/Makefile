PROJECT = transformer

TESTPROJECT = test-$(PROJECT)

LIBPROJECT = $(PROJECT).a

OBJECTS = transformer.o gun.o armor.o decepticon.o autobot.o minicon.o

TEST-OBJECTS = test-transformer.o

DEPS = (wildcard *.h)

A = ar

AFLAGS = rsv

CXX = g++

CXXFLAGS = -I. -std=c++17 -Wall -g -fPIC

LDXXFLAGS = $(CXXFLAGS) -L. -l:$(LIBPROJECT)

LDGTESTFLAGS = $(LDXXFLAGS) -lgtest_main -lgtest -lpthread

.PHONY: default

default: all;

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)
	
$(LIBPROJECT): $(OBJECTS)
	$(A) $(AFLAGS) $@ $^

$(PROJECT): main.o $(LIBPROJECT)
	$(CXX) -o $@ main.o $(LDXXFLAGS)

$(TESTPROJECT): $(LIBPROJECT) $(TEST-OBJECTS) 
	$(CXX) -o $@ $(TEST-OBJECTS) $(LDGTESTFLAGS)
	
test: $(TESTPROJECT)

all: $(PROJECT)

.PHONY: clean

clean:
	rm -f *.o

cleanall: clean
	rm -f $(PROJECT)
	rm -f $(LIBPROJECT)
	rm -f $(TESTPROJECT)
