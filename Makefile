all: main.cpp
	g++ main.cpp
test: test.cpp
	g++ test.cpp -L /usr/lib/ -lcppunit  -o test.o

clean: 
	rm a.out
