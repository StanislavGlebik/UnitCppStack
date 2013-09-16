all:  
	g++ stack.h -o stack.o
test: 
	g++ test.cpp -L /usr/lib/ -lcppunit  -o test.o
clean: 
	rm *.o 
