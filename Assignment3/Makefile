transformers: main.o transformer.o gun.o armor.o decepticon.o autobot.o minicon.o
	g++ main.o transformer.o gun.o armor.o decepticon.o autobot.o minicon.o -o transformers

main.o: main.cpp
	g++ -c main.cpp

transformer.o: transformer.cpp transformer.hpp
	g++ -c transformer.cpp
	
gun.o: gun.cpp gun.hpp
	g++ -c gun.cpp

armor.o: armor.cpp armor.hpp
	g++ -c armor.cpp

decepticon.o: decepticon.cpp decepticon.hpp
	g++ -c decepticon.cpp
	
autobot.o: autobot.cpp autobot.hpp
	g++ -c autobot.cpp

minicon.o: minicon.cpp minicon.hpp
	g++ -c minicon.cpp

test: test-transformer.cpp transformer.cpp gun.cpp armor.cpp decepticon.cpp autobot.cpp minicon.cpp
	g++ -Wall -g -pthread test-transformer.cpp transformer.cpp gun.cpp armor.cpp decepticon.cpp autobot.cpp minicon.cpp -lgtest_main -lgtest -lpthread

clean:
	rm *.o transformers
	
clean_test:
	rm a.out
