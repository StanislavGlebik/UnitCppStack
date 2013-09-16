all: main.cpp
	g++ main.cpp -o stack.o
test: test.cpp
	g++ test.cpp -L /usr/lib/ -lcppunit  -o test.o

clean: 
	rm *.o 
