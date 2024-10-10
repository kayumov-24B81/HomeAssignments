p_operator: main.o p_operator.o
	g++ main.o p_operator.o -o p_operator

main.o: main.cpp
	g++ -c main.cpp

p_operator.o: p_operator.cpp p_operator.hpp
	g++ -c p_operator.cpp

clean:
	rm *.o p_operator
