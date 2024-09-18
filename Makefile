hello_world: main.o
	g++ main.o -o hello_world

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o hello_world
