transformers: main.o transformer.o
	g++ main.o transformer.o -o transformers

main.o: main.cpp
	g++ -c main.cpp

transformer.o: transformer.cpp transformer.hpp
	g++ -c transformer.cpp

clean:
	rm *.o transformers
