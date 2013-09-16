#include <cppunit/TestRunner.h>

class MyStack {
private:
	size_t ssize;
public:
	MyStack() {
		ssize = 0;	
	}

	size_t size() const; 
	
	void Pop();
	void Push(int elem);
};

size_t MyStack::size() const {
	return ssize;
}

