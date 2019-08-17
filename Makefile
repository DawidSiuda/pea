
pea: main.o reader.o bruteforce.o
	g++ -O0 -g -o pea main.o reader.o bruteforce.o

main.o: main.cpp
	g++ -c main.cpp -o main.o

reader.o: Reader.cpp
	g++ -c Reader.cpp -o reader.o

bruteforce.o: BruteForce.cpp
	g++ -c BruteForce.cpp -o bruteforce.o

