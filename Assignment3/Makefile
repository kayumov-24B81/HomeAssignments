transformers: main.o transformer.o gun.o armor.o
	g++ main.o transformer.o gun.o armor.o -o transformers

main.o: main.cpp
	g++ -c main.cpp

transformer.o: transformer.cpp transformer.hpp
	g++ -c transformer.cpp
	
gun.o: gun.cpp gun.hpp
	g++ -c gun.cpp

armor.o: armor.cpp armor.hpp
	g++ -c armor.cpp

clean:
	rm *.o transformers
