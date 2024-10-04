bin_operator: main.o getsize.o readfile.o
	g++ main.o getsize.o readfile.o -o bin_operator

main.o: main.cpp
	g++ -c main.cpp

getsize.o: getsize.cpp binaryop.hpp
	g++ -c getsize.cpp 

readfile.o: readfile.cpp binaryop.hpp
	g++ -c readfile.cpp

clean:
	rm *.o bin_operator
