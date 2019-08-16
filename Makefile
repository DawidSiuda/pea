
pea: main.o reader.o
	g++ -O0 -g -o pea main.o reader.o

main.o: main.cpp
	g++ -c main.cpp -o main.o

reader.o: Reader.cpp
	g++ -c Reader.cpp -o reader.o

