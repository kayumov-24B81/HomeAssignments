transformers: main.o transformer.o gun.o
	g++ main.o transformer.o gun.o -o transformers

main.o: main.cpp
	g++ -c main.cpp

transformer.o: transformer.cpp transformer.hpp
	g++ -c transformer.cpp
	
gun.o: gun.cpp gun.hpp
	g++ -c gun.cpp

clean:
	rm *.o transformers
