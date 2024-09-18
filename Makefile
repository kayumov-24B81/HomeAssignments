hello_world: main.o hello_world.o
	g++ main.o hello_world.o -o hello_world 

main.o: main.cpp
	g++ -c main.cpp

hello_world.o: hello_world.cpp hello_world.hpp
	g++ -c hello_world.cpp

clean:
	rm *.o hello_world
